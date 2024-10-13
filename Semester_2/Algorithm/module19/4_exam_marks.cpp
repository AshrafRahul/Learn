#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int n, int a[], int s) {
    bool dp[n + 1][s + 1];

    for (int i = 0; i <= n; i++) dp[i][0] = true;
    
    for (int i = 1; i <= s; i++) dp[0][i] = false;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (a[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][s];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (m == 1000) {
            cout << "YES" << endl;
        } else if (m > 1000) {
            cout << "NO" << endl;
        } else {
            int required_marks = 1000 - m; 
            if (subset_sum(n, a, required_marks)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
