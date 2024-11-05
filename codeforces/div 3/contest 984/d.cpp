#include "bits/stdc++.h"
using namespace std;

int countO(const vector<string>& carpet, int n, int m) {
    int count = 0;
    string target = "1543";

    for (int layer = 0; layer < min(n, m) / 2; layer++) {
        string current;
        for (int j = layer; j < m - layer; j++)
            current += carpet[layer][j];

        for (int i = layer + 1; i < n - layer; i++)
            current += carpet[i][m - layer - 1];

        for (int j = m - layer - 2; j >= layer; j--)
            current += carpet[n - layer - 1][j];

        for (int i = n - layer - 2; i > layer; i--)
            current += carpet[i][layer];

        current += current;
        for (int i = 0; i < current.length() / 2; i++) {
            if (current.substr(i, 4) == target)
                count++;
        }
    }

    return count;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> carpet(n);
    for (int i = 0; i < n; i++)
        cin >> carpet[i];

    cout << countO(carpet, n, m) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}