#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll cvs = 0;
    ll ans = (n * (n + 1)) / 2;
    for (ll i = n; i > 0; --i) {
        if (s[i - 1] == '0') {
            cvs = max(cvs - 1, 0LL);
            continue;
        }
        if (cvs + 1 > i - 1) {
            cvs = max(cvs - 1, 0LL);
            continue;
        }
        ans -= i;
        cvs++;
    }
    cout << ans << '\n';
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}