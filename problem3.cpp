#include <iostream>
#include <vector>
using namespace std;

// Name: Imai Shunpei
// Student ID: s1113570
// Submission Date: 2024-12-11

// This function performs a depth-first search (DFS) on a graph represented as an adjacency list.
// It recursively explores each node and its neighbors, storing the order of visited nodes.
void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, vector<int>& result) {
    visited[node] = true;  // Mark the current node as visited.
    result.push_back(node);  // Add it to the result list.

    // Recursively visit each unvisited neighbor.
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, result);  // Recursive DFS call.
        }
    }
}

// This function initializes the necessary data structures for DFS and starts the search from node 0.
vector<int> depthFirstSearch(const vector<vector<int>>& adj) {
    vector<int> result;  // Stores the result of the DFS.
    vector<bool> visited(adj.size(), false);  // Tracks which nodes have been visited.

    // Start DFS from node 0.
    dfs(0, adj, visited, result);

    return result;
}

int main() {
    // The adjacency list representation of the graph.
    vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};

    // Execute DFS and store the results.
    vector<int> dfsResult = depthFirstSearch(adj);

    // Output the DFS traversal result.
    cout << "DFS Traversal Output: ";
    for (int node : dfsResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
