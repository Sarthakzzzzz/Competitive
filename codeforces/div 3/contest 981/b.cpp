//
// Created by sarthakzzzzz on 24-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        int op = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] < 0) {
                    int needed = -a[i][j];
                    op += needed;
                    int k = 0;
                    while (i + k < n && j + k < n) {
                        a[i + k][j + k] += needed;
                        k += 1;
                    }
                }
            }
        }

        cout << op << '\n';
    }

    return 0;
}