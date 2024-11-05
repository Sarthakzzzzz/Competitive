#include <bits/stdc++.h>
using namespace std;
int h, w, k;
vector<vector<char>> grid;
int result = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int moves, vector<vector<bool>>& visited) {
    if (moves == k) {
        result++;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < h && ny >= 0 && ny < w && grid[nx][ny] == '.' && !visited[nx][ny]) {
            visited[nx][ny] = true;
            dfs(nx, ny, moves + 1, visited);
            visited[nx][ny] = false;
        }
    }
}

int main() {
    cin >> h >> w >> k;
    grid.resize(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                vector<vector<bool>> visited(h, vector<bool>(w, false));
                visited[i][j] = true;
                dfs(i, j, 0, visited);
            }
        }
    }
    cout << result << '\n';
    return 0;
}
