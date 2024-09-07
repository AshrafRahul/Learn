#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> v[N];
bool vis[N];
int level[N];

void bfs(int src, int des) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();

        if(parent==des) {
            cout << level[parent] << endl;
            return;
        }

        for(int child: v[parent]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent]+1;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    int n, e;
    cin >> n >> e;

    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int Q;
    cin >> Q;
    while(Q--) {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(src, des);
    }

    return 0;
}
