#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

void depth_first_search(int node) {
    // DFS requieres stack data structure, starting from a given initial node
    visited[node] = true;
    cout << node << ' ';
    // For each child of node, if it hasn't been visited, call DFS function
    for(int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        if(!visited[child]) {
            depth_first_search(child);
        }
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    // Initialize visited and adjacency list
    visited.assign(nodes, false);
    adj.assign(nodes, vector<int>());
    // Values of nodes, given as pairs
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // <- Assuming undirected graph
    }
    // For each node, if it hasn't been visited, call DFS function
    for(int i = 0; i < nodes; i++) {
        if(!visited[i]) {
            depth_first_search(i);
        }
    }

    return 0;
}