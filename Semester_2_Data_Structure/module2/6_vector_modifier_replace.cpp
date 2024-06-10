#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,2,2,4,2,2,5,6,7};
    replace(v.begin(), v.end(), 2, 100);

    for(int x: v) {
        cout << x << " ";
    } cout << endl;

    return 0;
}