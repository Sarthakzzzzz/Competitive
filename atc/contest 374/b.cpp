#include "bits/stdc++.h"
using namespace std;
int main() {
    string S, T;
    cin >> S >> T;
    int res = min(S.length(), T.length());
    for (int i = 0; i < res; i++) {
        if (S[i] != T[i]) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    if (S.length() != T.length()) {
        cout << res+ 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}
