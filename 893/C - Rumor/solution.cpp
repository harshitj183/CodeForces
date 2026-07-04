#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
void dfs(vector<int> &cost, vector<vector<int>> &graph,
         vector<bool> &visited, int node, long long &temp) {
 
    visited[node] = true;
    temp = min(temp, (long long)cost[node]);
 
    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(cost, graph, visited, next, temp);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, M;
    cin >> N >> M;
 
    vector<int> cost(N);
 
    for (int i = 0; i < N; i++) {
        cin >> cost[i];
    }
 
    vector<vector<int>> graph(N);
 
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
 
        u--;
        v--;
 
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
 
    vector<bool> visited(N, false);
    long long res = 0;
 
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            long long temp = LLONG_MAX;
            dfs(cost, graph, visited, i, temp);
            res += temp;
        }
    }
 
    cout << res << '
';
 
    return 0;
}