# Graph Connectivity Checker

## Implementation
- Graph representation using adjacency matrix (boolean 2D array)
- Depth-first search for graph traversal
- File-based graph input
- Connectivity testing functionality

## Features
- Configurable graph size (default: 10 vertices)
- File input format:
  ```
  n           // number of vertices
  v adj1 adj2 // vertex v connected to adj1, adj2, etc.
  ```
- Connectivity check: verifies if all vertices are reachable from each vertex
- Matrix visualization: prints adjacency matrix representation

## Functions
- `createGraph()`: Constructs graph from input file
- `isConnected()`: Tests graph connectivity
- `traverse()`: DFS implementation for vertex traversal
- `toString()`: Displays adjacency matrix
