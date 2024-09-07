#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

int dfs(int src) {
    vis[src] = true;
    int size = 1;

    for(int child: v[src]) {
        if(!vis[child]) {
            size += dfs(child);
        }
    }
    return size;
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

    vector<int> componentSize;

    for(int i=0; i<n; i++) {
        if(!vis[i]) {
            int size = dfs(i);
            componentSize.push_back(size);
        }
    }

    sort(componentSize.begin(), componentSize.end());

    for(int size: componentSize) {
        cout << size << " ";
    }
    cout << endl;
    return 0;
}
