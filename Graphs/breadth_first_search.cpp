#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

void breadth_first_search(int node) {
    // BFS requieres queue data structure, starting from a given initial node
    queue<int> q;
    q.push(node);
    visited[node] = true;
    // While queue is not empty, pop the first element and push its children
    while (!q.empty()) {
        int v = q.front();
        cout << v << " ";
        q.pop();
        // Push all children of v
        for (int u : adj[v]) {
            // If not visited, push and mark as visited
            if (!visited[u]) {
                q.push(u);
                visited[u] = true;
            }
        }
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    // Initialize visited and adjacency list
    visited.assign(nodes, false);
    adj.assign(nodes, vector<int>());
    int u, v;
    // Values of nodes, given as pairs
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // <- Assuming undirected graph
    }
    breadth_first_search(0); // Start BFS from node x

    return 0;
}