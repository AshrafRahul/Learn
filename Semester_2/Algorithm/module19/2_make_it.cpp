#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5; 
bool visited[MAXN];

bool canReach(int target) {
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == target) return true;
        if (current > target) continue;

        if (!visited[current + 3] && current + 3 < MAXN) {
            q.push(current + 3);
            visited[current + 3] = true;
        }

        if (!visited[current * 2] && current * 2 < MAXN) {
            q.push(current * 2);
            visited[current * 2] = true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        memset(visited, false, sizeof(visited));
        if (canReach(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}