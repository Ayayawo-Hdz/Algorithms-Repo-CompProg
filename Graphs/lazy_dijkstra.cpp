// Lazy version of Dijkstra's algorithm usign priority queue
// Works with negative weights while there are no negative cycles
// If there are any negative cycles, the algorithm will not work
#include <bits/stdc++.h>
#define GS 1000
#define INF 100000000
using namespace std;

// Define the graph and the distance array
vector<pair<int, int>> graph[GS];
int distance[GS];

void dijkstra(int origin, int size) {
    // Set all distances to INF
    for (int i = 0; i <= size; i++) distance[i] = INF;
    // Create the priority queue and the current pair
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pair<int, int> current;

    // Set the distance to the origin to 0 and push it to the queue
    pq.push(make_pair(0, origin));

    // While the queue is not empty, get the top element and update the distances
    while (!pq.empty()) {
        // Get the top element and pop it
        current = pq.top();
        pq.pop();

        // If the distance is already smaller, continue to next iteration
        if (distance[current.second] < current.first) continue;
        // Update the distance
        distance[current.second] = current.first;

        // Iterate over the neighbors and update the distances
        for (pair<int, int> neighbor : graph[current.second]) {
            // If the new distance is smaller, push it to the queue
            if ((neighbor.second + current.first) < distance[neighbor.first]) {
                pq.push(make_pair(neighbor.second + current.first, neighbor.first));
            }
        }
    }
}