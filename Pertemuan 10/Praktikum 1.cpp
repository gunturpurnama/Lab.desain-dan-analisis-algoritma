#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

int graph[MAX][MAX];
int n;

void addEdge(int x, int y) {
    graph[x][y] = 1;
    graph[y][x] = 1; // This line ensures the graph is undirected
}

void displayGraph() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Masukan Jumlah dimensi array: ";
    cin >> n;
    
    // Initialize the graph matrix to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
    
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 3);
    
    displayGraph();
    
    return 0;
}

