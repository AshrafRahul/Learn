#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int old_val, new_val, find_val;
    cin >> old_val >> new_val;
    cin >> find_val;

    replace(v.begin(), v.end(), old_val, new_val);

    auto it = find(v.begin(), v.end(), find_val);
    int index = (it!=v.end()) ? distance(v.begin(), it) : -1;

    for(int num: v) cout << num << " ";
    cout << endl;

    cout << index << endl;

    return 0;
}