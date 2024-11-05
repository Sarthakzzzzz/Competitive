#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define sq(a) ((a) * (a))

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        if (n % 2 == 0) {
            ll MAX = 1;
            for (int i = 0; i < n - 1; i += 2) {
                MAX = max(MAX, a[i + 1] - a[i]);
            }
            cout << MAX << '\n';
        } else {
            ll ans = LLONG_MAX;

            for (int j = 0; j < n; j += 2) {
                ll k = 1;
                if (j > 0) {
                    for (int i = j - 1; i > 0; i -= 2) {
                        k = max(k, a[i] - a[i - 1]);
                    }
                }
                if (j < n - 1) {
                    for (int i = j + 1; i < n - 1; i += 2) {
                        k = max(k, a[i + 1] - a[i]);
                    }
                }
                ans = min(ans, k);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
