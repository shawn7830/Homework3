#include <iostream>
#include <vector>
using namespace std;

// Name: Imai Shunpei
// Student ID: s1113570
// Submission Date: 2024-12-11

// This function creates an adjacency list for an undirected graph given its vertices and edges.
// It stores a list of edges for each vertex, representing connections to other vertices.
vector<vector<int>> createAdjacencyList(int V, vector<pair<int, int>> &edges) {
    vector<vector<int>> adj(V);  // Initialize the adjacency list for V vertices.

    // Update the adjacency list for each edge provided.
    for (auto &edge : edges) {
        int u = edge.first;   // One vertex of the edge
        int v = edge.second;  // The other vertex of the edge

        // Since the graph is undirected, add the edge in both directions.
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return adj;
}

int main() {
    int V = 5; // Number of vertices in the graph
    int E = 7; // Number of edges

    // Define the list of edges.
    vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {4, 1}, {4, 3}, {1, 3}, {1, 2}, {3, 2}};

    // Create the adjacency list.
    vector<vector<int>> adjacencyList = createAdjacencyList(V, edges);

    // Output the adjacency list for each vertex.
    for (int i = 0; i < adjacencyList.size(); i++) {
        cout << "Node " << i << " is connected to: ";
        for (int j : adjacencyList[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
