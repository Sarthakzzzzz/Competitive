#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> knights(M);

    for (int i = 0; i < M; ++i) {
        cin >> knights[i].first >> knights[i].second;
    }

    vector<pair<int, int>> moves = {
            {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
            {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    set<pair<int, int>> unsafe;
    for (const auto& [x, y] : knights) {
        for (const auto& [dx, dy] : moves) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= N) {
                unsafe.emplace(nx, ny);
            }
        }
    }

    // Calculate safe squares
    ll safe_squares = static_cast<ll>(N) * N - unsafe.size();
    cout << safe_squares << endl;

    return 0;
}
