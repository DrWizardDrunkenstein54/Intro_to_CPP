#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;


bool cmp(const pair<pair<ll, ll>, ll> instruction_a, const pair<pair<ll, ll>, ll> instruction_b)
{
    return (instruction_a.first.first == instruction_b.first.first && instruction_a.first.second < instruction_b.first.second) || instruction_a.first.first < instruction_b.first.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll destX, destY;
    cin >> destX >> destY;

    vector<pair<pair<ll, ll>, ll>> instruction_set_a = {{{0, 0}, 0}};
    vector<pair<pair<ll, ll>, ll>> instruction_set_b = {{{0, 0}, 0}};
    vector<ll> destination_count(n+1, 0);

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        ll sizeA = instruction_set_a.size(), sizeB = instruction_set_b.size();

        ll limit = n % 2 == 0 ? n/2 - 1: n/2;
        if (i <= limit)
        {
            for (ll j = 0; j < sizeA; j++)
                instruction_set_a.push_back({{instruction_set_a[j].first.first + x, instruction_set_a[j].first.second + y}, instruction_set_a[j].second + 1});
        }
        else
        {
            for (ll j = 0; j < sizeB; j++)
                instruction_set_b.push_back({{instruction_set_b[j].first.first + x, instruction_set_b[j].first.second + y}, instruction_set_b[j].second + 1});
        }
    }

    sort(instruction_set_a.begin(), instruction_set_a.end(), cmp);
    sort(instruction_set_b.begin(), instruction_set_b.end(), cmp);


//    for (auto instruction : instruction_set_a) {
//        cout << "[" << instruction.first.first << ", " << instruction.first.second << "] --> " << instruction.second << " ";
//    }
//    cout << endl << "----------------" << endl;
//    for (auto instruction : instruction_set_b) {
//        cout << "[" << instruction.first.first << ", " << instruction.first.second << "] --> " << instruction.second << " ";
//    }
//    cout << endl;

    ll first_pointer = 0, second_pointer = instruction_set_b.size() - 1;
    while (first_pointer < instruction_set_a.size() && second_pointer >= 0)
    {
        ll sumX = instruction_set_a[first_pointer].first.first + instruction_set_b[second_pointer].first.first;
        ll sumY = instruction_set_a[first_pointer].first.second + instruction_set_b[second_pointer].first.second;

        if (sumX == destX && sumY == destY)
        {
            destination_count[instruction_set_a[first_pointer].second + instruction_set_b[second_pointer].second]++;

            ll tempSumX = 0, tempSumY = 0;

            ll temp_first_pointer = first_pointer + 1;
            while (temp_first_pointer < instruction_set_a.size())
            {
                if (instruction_set_a[temp_first_pointer].first.first == instruction_set_a[first_pointer].first.first && instruction_set_a[temp_first_pointer].first.second == instruction_set_a[first_pointer].first.second)
                {
                    destination_count[instruction_set_a[temp_first_pointer].second + instruction_set_b[second_pointer].second]++;
                    temp_first_pointer++;
                }
                else
                    temp_first_pointer = instruction_set_a.size();
            }

            ll temp_second_pointer = second_pointer - 1;
            while (temp_second_pointer > 0)
            {
                if (instruction_set_b[temp_second_pointer].first.first == instruction_set_b[second_pointer].first.first && instruction_set_b[temp_second_pointer].first.second == instruction_set_b[second_pointer].first.second)
                {
                    destination_count[instruction_set_a[first_pointer].second + instruction_set_b[temp_second_pointer].second]++;
                    temp_second_pointer--;
                }
                else
                    temp_second_pointer = 0;
                
            }
            first_pointer++;
            second_pointer--;
        }
        else if (sumX < destX)
            first_pointer++;
        else if (sumX > destX)
            second_pointer--;
        else if (sumY < destY)
            first_pointer++;
        else if (sumY > destY)
            second_pointer--;
    }

    for (ll i = 1; i <= n; i++) cout << destination_count[i] << endl;

    return 0;
}
