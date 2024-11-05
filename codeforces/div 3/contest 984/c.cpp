#include "bits/stdc++.h"
using namespace std;

int cnt1100(const string& s) {
    int cnt = 0;
    for (int i = 0; i + 3 < s.size(); ++i) {
        if (s.substr(i, 4) == "1100") cnt++;
    }
    return cnt;
}

bool is1100(const string& s, int pos) {
    return pos >= 0 && pos + 3 < s.size() && s.substr(pos, 4) == "1100";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        int cnt = cnt1100(s);

        while (q--) {
            int i, v;
            cin >> i >> v;
            i--;

            for (int j = i - 3; j <= i; ++j) {
                if (is1100(s, j)) cnt--;
            }

            s[i] = (v == 1 ? '1' : '0');
            for (int j = i - 3; j <= i; ++j) {
                if (is1100(s, j)) cnt++;
            }

            cout << (cnt > 0 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
