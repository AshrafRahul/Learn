#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void dfs(int node, int &count) {
    vis[node] = true;
    count++;

    for(int child: v[node]) {
        if(!vis[child]) {
            dfs(child, count);
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

    int start;
    cin >> start;

    memset(vis, false, sizeof(vis));
    int count = 0;
    dfs(start, count);

    cout << count << endl;

    return 0;
}
