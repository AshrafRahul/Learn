#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> leftSum(n);
    int currentSum=0;

    for(int i=0; i<n; i++) {
        leftSum[i] = currentSum;
        currentSum += a[i];
    }

    for(int i=0; i<n; i++) {
        cout << leftSum[i] << " ";
    } cout << endl;

    return 0;
}