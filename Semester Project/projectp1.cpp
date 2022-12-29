#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, xg, yg;
    cin >> n >> xg >> yg;

    vector<pair<pair<int, int>, int>> possible_locations;
    vector<int> possible_answers(n);

    possible_locations.push_back({{0, 0}, 0});
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        int new_possibilities = possible_locations.size();
        for (int j = 0; j < new_possibilities; j++)
        {
            possible_locations.push_back({{possible_locations[j].first.first + x, possible_locations[j].first.second + y}, possible_locations[j].second + 1});
        }
    }

//    for (pair<pair<int, int>, int> location : possible_locations)
//    {
//        cout << location.first.first << ", " << location.first.second << "-->" << location.second << endl;
//    }

    for (pair<pair<int, int>, int> location : possible_locations)
    {
        pair<int, int> coordinate = location.first;
        int instructions_used = location.second;

        if (coordinate == make_pair(xg, yg))
        {
            possible_answers[instructions_used]++;
        }
    }

    for (int k = 1; k <= n; k++)
    {
        cout << possible_answers[k] << endl;
    }


    return 0;
}
