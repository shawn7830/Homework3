#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Name: Imai Shunpei
// Student ID: s1113570
// Submission Date: 2024-12-11

// Structure to represent an edge of a graph.
struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
};

// Comparator function to sort edges by weight.
bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

// Union-Find data structure to help in finding cycles.
class UnionFind {
    vector<int> parent, rank;

public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) return false; // Same root, cycle detected

        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }

        return true;
    }
};

// Kruskal's algorithm to find the minimum spanning tree (MST) of a graph.
int kruskalMST(int V, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compare); // Sort edges by ascending weight.
    UnionFind uf(V);

    int mstWeight = 0;

    for (auto& edge : edges) {
        if (uf.unionSets(edge.u, edge.v)) { // If adding this edge does not form a cycle
            mstWeight += edge.weight; // Add its weight to the total weight of the MST
        }
    }

    return mstWeight;
}

int main() {
    int V = 3, E = 3;
    vector<Edge> edges;
    edges.emplace_back(0, 1, 5);
    edges.emplace_back(1, 2, 3);
    edges.emplace_back(0, 2, 1);

    int mstWeight = kruskalMST(V, edges); // Compute the MST weight

    cout << "Sum of weights in the Minimum Spanning Tree: " << mstWeight << endl;

    return 0;
}
