#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Name: Imai Shunpei
// Student ID: s1113570
// Submission Date: 2024-12-11

// This function performs a breadth-first search (BFS) on a graph represented as an adjacency list.
// It returns a list of nodes in the order they were visited.
vector<int> breadthFirstSearch(const vector<vector<int>>& adj) {
    vector<int> result;  // This will store the order of visited nodes.
    vector<bool> visited(adj.size(), false);  // Keeps track of visited nodes to avoid revisiting.
    queue<int> q;  // The queue used to manage the nodes during BFS.

    // Start BFS from node 0.
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int current = q.front();  // Get the current node.
        q.pop();
        result.push_back(current);  // Add it to the result list.

        // Check all adjacent nodes.
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {  // If not visited, mark it and add to the queue.
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return result;
}

int main() {
    // The adjacency list representation of the graph.
    vector<vector<int>> adj = {{2, 3, 1}, {0, 4}, {0}, {0}, {1}};

    // Execute BFS and store the results.
    vector<int> bfsResult = breadthFirstSearch(adj);

    // Output the BFS traversal result.
    cout << "BFS Traversal Output: ";
    for (int node : bfsResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
