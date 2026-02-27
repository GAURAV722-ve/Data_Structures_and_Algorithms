#include <iostream>
using namespace std;

int main() {
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    cout << "Enter number of edges: ";
    cin >> edges;

    int adj[100][100] = {0};

    cout << "Enter edges (u v):\n";
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout << "\nAdjacency Matrix:\n";
    for(int i = 0; i < vertices; i++) {
        for(int j = 0; j < vertices; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nDegree of each vertex:\n";
    for(int i = 0; i < vertices; i++) {
        int degree = 0;
        for(int j = 0; j < vertices; j++) {
            degree += adj[i][j];
        }
        cout << "Degree of vertex " << i << " = " << degree << endl;
    }

    return 0;
}