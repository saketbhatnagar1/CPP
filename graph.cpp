#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>

using namespace std;

// Definition of the Graph class
class Graph {
    int V; // Number of vertices
    vector<list<int>> adj; // Adjacency list representation

public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int V);

    // Function to add an edge to the graph
    void addEdge(int v, int w);

    // Function for Breadth-First Search traversal
    void BFS(int s);

    // Function for Depth-First Search traversal
    void DFS(int v);

private:
    // Utility function used by DFS
    void DFSUtil(int v, vector<bool>& visited);
};

// Constructor to initialize the graph with a given number of vertices
Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

// Function to add an edge to the graph
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v's list
}

// Function for Breadth-First Search traversal
void Graph::BFS(int s) {
    vector<bool> visited(V, false); // Mark all vertices as not visited
    queue<int> queue; // Create a queue for BFS

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push(s);

    while (!queue.empty()) {
        // Dequeue a vertex from the queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued vertex s
        // If an adjacent vertex has not been visited, mark it visited and enqueue it
        for (auto adjVertex : adj[s]) {
            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                queue.push(adjVertex);
            }
        }
    }
}

// Utility function used by DFS
void Graph::DFSUtil(int v, vector<bool>& visited) {
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    for (auto adjVertex : adj[v]) {
        if (!visited[adjVertex]) {
            DFSUtil(adjVertex, visited);
        }
    }
}

// Function for Depth-First Search traversal
void Graph::DFS(int v) {
    vector<bool> visited(V, false); // Mark all vertices as not visited
    DFSUtil(v, visited); // Call the recursive helper function
}

int main() {
    // Create a graph with 4 vertices
    Graph g(4);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Breadth-First Search (starting from vertex 2): ";
    g.BFS(2);

    cout << "\nDepth-First Search (starting from vertex 2): ";
    g.DFS(2);

    return 0;
}

/*
Explanation:
1. Graph class: Represents a directed graph using an adjacency list representation.
2. Graph::Graph(int V): Constructor to initialize the graph with a specified number of vertices.
3. void addEdge(int v, int w): Adds an edge from vertex v to vertex w.
4. void BFS(int s): Performs Breadth-First Search traversal starting from vertex s.
   - Uses a queue to explore vertices level by level.
   - Marks vertices as visited to avoid processing them more than once.
5. void DFS(int v): Performs Depth-First Search traversal starting from vertex v.
   - Uses a helper function DFSUtil to perform the recursive traversal.
   - Marks vertices as visited to avoid processing them more than once.
6. void DFSUtil(int v, vector<bool>& visited): Utility function for DFS that marks the current vertex as visited and recursively visits all its adjacent vertices.
7. main function: Demonstrates creating a graph, adding edges, and performing BFS and DFS traversals starting from a specified vertex.
*/
