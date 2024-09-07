#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> v[N];
bool vis[N];
int level[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();

        for(int child: v[parent]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent]+1;
            }
        }
    }
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

    int l;
    cin >> l;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(0);

    vector<int> result;
    for(int i=0; i<n; i++) {
        if(level[i] == l) 
            result.push_back(i);
    }

    sort(result.rbegin(), result.rend());
    for(int node: result) {
        cout << node << " ";
    }

    return 0;
}
