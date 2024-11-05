#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main(){
    int t; cin >> t;
    vector<int> n(t), k(t);
    for (ll i = 0; i < t; ++i) cin >> n[i];
    for (ll i = 0; i < t; ++i) cin >> k[i];
    for (ll i = 0; i < t; ++i) {
        cout << binpow(2, k[i], MOD) << '\n';
    }
    return 0;
}
