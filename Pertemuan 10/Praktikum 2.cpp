#include<iostream>
#include<cstring>

using namespace std;

const int N = 100;
int dist[N][N];

void floydWarshall(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Masukan Jumlah node pada graph: ";
    cin >> n;
    memset(dist, 0x3f, sizeof dist); // Initialize with a large number (infinity)
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }
    
    cout << "Masukkan Jumlah edge: ";
    cin >> m;
    
    cout << "Masukkan edge dan jarak (format: node1 node2 jarak): " << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }

    floydWarshall(n);
    
    cout << "Hasil jalur terpendek antar node: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == 0x3f3f3f3f) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

