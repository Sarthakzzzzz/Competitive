#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int res = 0;

        if (n & 1) {
            cout << n << '\n';
            for (int i = 1; i <= n; ++i) {
                if (i <= 2) cout << 3 - i << ' ';
                else cout << i << ' ';
            }
            cout << '\n';
        } else {
            int len = __lg(n) + 1;
            res = (1 << len) - 1;
            cout << res << '\n';


            for (int i = (1 << (len - 1)) + 1; i <= n; ++i) {
                cout << i << ' ';
            }


            for (int i = 1; i <= (1 << (len - 1)); ++i) {
                if (i <= 2) cout << 3 - i << ' ';
                else cout << i << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
