#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    v.erase(v.begin()+3);
    for(int i: v) {
        cout << i << " ";
    } cout << endl;

    vector<int> vv = {1,2,3,4,5};
    vv.erase(vv.begin()+1, vv.end()-1);
    for(int i: vv) {
        cout << i << " ";
    } cout << endl;

    return 0;
}