#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> b(n, -1);
    unordered_map<int, int> lo;
    for (int i = 0; i < n; ++i) {
        if (lo.count(a[i])) {
            b[i] = lo[a[i]];
        }
        lo[a[i]] = i + 1;
    }

    for (auto i : b) {
        cout << i << " ";
    }
    cout << '\n';

    return 0;
}
