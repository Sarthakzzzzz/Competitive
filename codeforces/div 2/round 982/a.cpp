//
// Created by sarthakzzzzz on 26-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int mw = 0;
        int mh = 0;

        for (int i = 0; i < n; ++i) {
            int w, h;
            cin >> w >> h;
            mw = max(mw, w);
            mh = max(mh, h);
        }
        int perimeter = 2 * (mw + mh);
        cout << perimeter << endl;
    }

    return 0;
}
