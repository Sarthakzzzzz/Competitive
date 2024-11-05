#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    map<int, vector<int>> m;
    for(int i = 0; i < k; i++) {
        int b, c;
        cin >> b >> c;
        m[b].push_back(c);
    }

    long long ans = 0;
    if(m.size() <= n) {
        for(auto& [_, costs] : m) {
            sort(costs.rbegin(), costs.rend());
            ans += accumulate(costs.begin(), costs.end(), 0LL);
        }
    } else {
        vector<long long> sums;
        for(auto& [_, costs] : m) {
            sort(costs.rbegin(), costs.rend());
            sums.push_back(accumulate(costs.begin(), costs.end(), 0LL));
        }
        sort(sums.rbegin(), sums.rend());
        ans = accumulate(sums.begin(), sums.begin() + n, 0LL);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}