#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int n, int a[], int s) {
    bool dp[n + 1][s + 1];
    
    for (int i=0; i<=n; i++) dp[i][0] = true;
    
    for (int i=1; i<=s; i++) dp[0][i] = false;
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=s; j++) {
            if (a[i-1] <= j) {
                dp[i][j] = dp[i-1][j - a[i-1]] || dp[i-1][j];
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
        int n;
        cin >> n;
        int a[n];
        int total_sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }
        
        if (total_sum % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int target_sum = total_sum / 2;
            if (subset_sum(n, a, target_sum)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
