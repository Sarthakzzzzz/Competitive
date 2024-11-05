//
// Created by sarthakzzzzz on 19-10-2024.
//
#include "bits/stdc++.h"
using namespace std;

int find_cycle(int n, int m, vector<pair<int, int>> &edges) {
    vector<vector<int>> graph(n + 1);
    for (auto &edge : edges)
        graph[edge.first].push_back(edge.second);

    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
            } else if (neighbor == 1) {
                return dist[node] + 1;
            }
        }
    }

    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; ++i)
        cin >> edges[i].first >> edges[i].second;

    cout << find_cycle(n, m, edges) << endl;
    return 0;
}
