#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N];
vector<int> v[N];
int parrentArray[N];
bool ans;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();

        for(int child: v[parent]) {
            if(vis[child] && parrentArray[parent]!=child) {
                ans = true;
            }
            if(!vis[child]) {
                vis[child] = true;
                parrentArray[child] = parent;
                q.push(child);
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

    memset(vis, false, sizeof(vis));
    memset(parrentArray, -1, sizeof(parrentArray));
    ans = false;

    for(int i=0; i<n; i++) {
        if(!vis[i]) {
            bfs(i);
        }
    }
    if(ans) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
