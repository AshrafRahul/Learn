#include <bits/stdc++.h>
using namespace std;

class Edge {
    public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int INF = 30000;
const int N = 105;

int dis[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin>>n >> m;

    vector<Edge> EdgeList;

    for(int i=1; i<=m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back({u, v, c});
    }

    for(int i=1; i<=n; i++) {
        dis[i] = INF;
    }

    dis[1] = 0;
    for(int i=1; i<=n-1; i++) {
        for(Edge ed: EdgeList) {
           int u = ed.u;
           int v = ed.v;
           int c = ed.c;
           if(dis[u]< INF && dis[u]+c < dis[v]) {
            dis[v] = dis[u]+c;
           } 
        }
    }

    for(int i=1; i<=n; i++) {
        if(dis[i] == INF) cout << INF << " ";
        else cout << dis[i] << " ";
    }
    cout << endl;

    return 0;
}
