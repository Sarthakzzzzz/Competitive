//
// Created by sarthakzzzzz on 01-11-2024.
//
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, on = 0, x;
    cin >> n;

    for (int i = 0; i < 2 * n; ++i) {
        cin >> x;
        if (x == 1) on++;
    }

    int off = 2 * n - on;

    if (off == 0) {
        cout << "0 0\n";
    } else {
        cout << min(on, off) % 2 << " " << min(on, off) << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
