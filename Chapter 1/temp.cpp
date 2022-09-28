//#include <map>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//// #typedef
//
//
//using namespace std;
//using ll = long long;
//
//
//ll n;
//vector<pair<pair<ll, ll>, pair<ll, ll>>> arr1(n);
//vector<pair<pair<ll, ll>, pair<ll, ll>>> arr2(n);
//
//map<ll, ll> sizes;
//
//void calsubsets(ll len, ll translation, vector<pair<pair<ll, ll>, pair<ll, ll>>>& sub, vector<pair<ll, ll>>& vectors) {
//    for (ll first_pointer = 0; first_pointer < (1 << len); first_pointer++) {
//        ll x, x2, y, y2;
//        x = 0;
//        x2 = 0;
//        y = 0;
//        y2 = 0;
//
//        for (ll second_pointer = 0; second_pointer < len; second_pointer++) {
//            // bit
//            if (first_pointer & (1 << second_pointer)) {
//                x += vectors[second_pointer + translation].first;
//                y += vectors[second_pointer + translation].second;
//                x2++;
//                y2++;
//            }
//            // else if
//        }
//        // new
//        sub[first_pointer].first.first = x;
//        sub[first_pointer].second.first = y;
//        sub[first_pointer].first.second = x2;
//        sub[first_pointer].second.second = y2;
//    }
//}
//
//// mim alg
//void cal(ll n, pair<ll,ll> destination, vector<pair<ll,ll>>& vectors) {
//
//    // div
//    ll arr1l; ll arr2l;
//    // bit
//    arr1l = 1 << (n / 2); arr2l = 1 << (n - (n / 2));
//
//    arr1.resize(arr1l); arr2.resize(arr2l);
//
//    // get subsets
//    calsubsets(n / 2, 0, arr1, vectors);
//    calsubsets(n - (n / 2), n / 2, arr2, vectors);
//
//    sort(begin(arr2), end(arr2));
//
//    for (ll i = 0; i < arr1l; i++) {
//        if (destination.first >= arr1[i].first.first) {
//            pair<pair<ll,ll>,pair<ll,ll>> temp = make_pair(make_pair(destination.first-arr1[i].first.first,0),make_pair(0,0));
//            // index
//            ll lb = lower_bound(arr2.begin(),arr2.end(),temp) - arr2.begin();
//            // bin search
//            if (lb == arr2l || arr2[lb].first.first != (destination.first - arr1[i].first.first)) lb--;
//            ll temp2 = arr2[lb].first.first;
//            while (temp2 == arr2[lb].first.first) {
//                if ((destination.first == (arr1[i].first.first + arr2[lb].first.first)) && (destination.second == (arr2[lb].second.first + arr1[i].second.first))) {
//                    sizes[arr2[lb].first.second + arr1[i].first.second]++;
//                }
//                // done
//                if (arr2l == lb) break;
//                else lb++;
//            }
//        }
//    }
//    /*
//
//     */
//
//
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(0); cin.tie(0);
//
//    cin >> n;
//
//    pair<ll,ll> target;
//    ll xg, yg; cin >> xg >> yg;
//    target = make_pair(xg, yg);
//
//    vector<pair<ll,ll>> vectors;
//
//    for (ll i = 0; i < n; i++) {
//        ll xi;
//        ll yi;
//        cin >> xi >> yi;
//        vectors.push_back({xi, yi});
//    }
//
//    // 3) *sort given set of vectors*
//    sort(begin(vectors), end(vectors));
//
//
//    // for (int i = 1; i <= n; i++)
//
//
//
//
//
//    cal(n, target, vectors);
//    for (ll i = 1; i <= n; i++) {
//        cout << sizes[i] << endl;
//    }
//
//}
