#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int N, M;
    cin >> N >> M;
    map<int, vector<pair<int, ll>>> adj;
    for (int i = 0; i < M; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, -w);  
    }
    map<int, ll> val;
    map<int, bool> visited;
    for (int i = 1; i <= N; ++i) {

        if (visited[i]) continue;

        val[i] = 0;
        stack<int> st;
        st.push(i);
        visited[i] = true;
        while (!st.empty()) {
            int u = st.top();
            st.pop();
            for (const auto& [v, w] : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    val[v] = val[u] + w; 
                    st.push(v);
                }
            }
        }
    }

    for (int i = 1; i <= N; ++i) {
        cout << val[i] << " ";
    }
    cout << endl;

    return 0;
}
