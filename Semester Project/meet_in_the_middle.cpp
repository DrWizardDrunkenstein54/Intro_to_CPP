//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//
//    ll n, x;
//    cin >> n >> x;
//
//    vector<ll> a = {0};
//    vector<ll> b = {0};
//    ll ans = 0;
//
//    for (ll i = 0; i < n; i++) {
//        ll num; cin >> num;
//
//        ll sizeA = a.size(), sizeB = b.size();
//        ll limit = n % 2 == 0 ? n/2 : n/2 + 1;
//        if (i <= limit) {
//            for (ll j = 0; j < sizeA; j++) a.push_back(a[j] + num);
//        } else {
//            for (ll j = 0; j < sizeB; j++) b.push_back(b[j] + num);
//        }
//    }
//
//    sort(a.begin(), a.end());
//    sort(b.begin(), b.end());
//
//    ll first_pointer = 0, second_pointer = b.size() - 1;
//    while (first_pointer < a.size() && second_pointer >= 0) {
//        ll sum = a[first_pointer] + b[second_pointer];
//        if (sum == x) {
//            ans++;
//
//            ll temp_first_pointer = first_pointer + 1;
//            while (temp_first_pointer < a.size()) {
//                if (a[temp_first_pointer] == a[first_pointer]) {
//                    ans++;
//                    temp_first_pointer++;
//                }
//                else break;
//            }
//
//            ll temp_second_pointer = second_pointer - 1;
//            while (temp_second_pointer >= 0) {
//                if (b[temp_second_pointer] == b[second_pointer]) {
//                    ans++;
//                    temp_second_pointer--;
//                }
//                else break;
//            }
//
//            first_pointer++;
//            second_pointer--;
//        }
//
//        else if (sum < x) first_pointer++;
//        else if (sum > x) second_pointer--;
//
//    }
//
//    cout << ans << endl;
//    return 0;
//}
