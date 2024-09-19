#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000 // A large value to represent infinity

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    vector<vector<int>> adj(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == -1) {
                adj[i][j] = INF;
            } else {
                adj[i][j] = x; 
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] < INF && adj[k][j] < INF) { 
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    int maxShortestDistance = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && adj[i][j] < INF) {
                maxShortestDistance = max(maxShortestDistance, adj[i][j]);
            }
        }
    }

    cout << maxShortestDistance << endl;
    return 0;
}
