#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i=1; i<=n; i++) v.push_back(i);
    for(int num: v) cout << num << " ";
    cout << endl;

    return 0;
}