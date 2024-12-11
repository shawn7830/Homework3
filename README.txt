# Homework Submission

https://github.com/shawn7830/Homework3.git

**Name:今井駿平 shawn
**Student ID: s1113570  
**Date of Submission:** 11-Dec-2024  

## Homework Description  
This submission includes solutions to four programming tasks focused on graph algorithms, implemented in C++. Each task is designed to address a specific aspect of graph operations such as adjacency lists, BFS, DFS, and MST calculations.

## Files Included  
1. **question1.cpp**:  
   - **Description**: Creates and returns an adjacency list of an undirected graph with given vertices and edges.  
   - **Input**: Number of vertices `V` and a list of edges.  
   - **Output**: Adjacency list of the graph.

2. **question2.cpp**:  
   - **Description**: Performs a Breadth-First Search (BFS) on a graph given by an adjacency list and returns the order of nodes visited.  
   - **Input**: Adjacency list of the graph.  
   - **Output**: Order of nodes visited in BFS.

3. **question3.cpp**:  
   - **Description**: Performs a Depth-First Search (DFS) on a graph given by an adjacency list and returns the order of nodes visited.  
   - **Input**: Adjacency list of the graph.  
   - **Output**: Order of nodes visited in DFS.

4. **question4.cpp**:  
   - **Description**: Computes the minimum spanning tree (MST) of a given undirected weighted graph using Kruskal's algorithm and returns the sum of the weights of the edges in the MST.  
   - **Input**: Number of vertices `V`, number of edges `E`, and a list of edges with weights.  
   - **Output**: Sum of the weights in the MST.

## Sample Input and Output  
1. **question1.cpp**:  
   Input: `5, [[0, 1], [0, 4], [4, 1], [4, 3], [1, 3], [1, 2], [3, 2]]`  
   Output: `[[1, 4], [0, 2, 3, 4], [1, 3], [1, 2, 4], [0, 1, 3]]`

2. **question2.cpp**:  
   Input: `[[2, 3, 1], [0, 4], [0], [0], [1]]`  
   Output: `[0, 2, 3, 1, 4]`

3. **question3.cpp**:  
   Input: `[[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]`  
   Output: `[0, 1, 2, 3, 4]`

4. **question4.cpp**:  
   Input: `3, 3, [(0, 1, 5), (1, 2, 3), (0, 2, 1)]`  
   Output: `4`

## Special Notes  
- All programs are written in C++ and require a C++ compiler (e.g., g++) to compile and run.  
- To compile a program, use the command: `g++ questionX.cpp -o questionX` where `X` is the question number.  
