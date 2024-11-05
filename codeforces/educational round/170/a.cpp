#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int p = 0;
        int len1 = s1.length();
        int len2 = s2.length();

        for (int i = 0; i < min(len1, len2); ++i) {
            if (s1[i] == s2[i]) p++;
            else break;
        }
        int res = len1+len2;
        cout << min(res,res-p+1) << '\n';
    }

    return 0;
}
