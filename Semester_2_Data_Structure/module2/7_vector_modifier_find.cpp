#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,2,4,5,2,3,6,5,2,1,2,4,5};
    // vector<int>:: iterator it;
    auto it = find(v.begin(), v.end(), 3);
    cout << *it << endl;

    return 0;
}