#include<bits/stdc++.h>
using namespace std;

int main() {
    //type1
    //vector<int> v;

    //type2
    // vector<int> v(5);
    // for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    // cout << endl;

    //type3
    // vector<int> v(5,6);

    //type4
    // vector<int> v2(5,100);
    // vector<int> v(v2);

    //type5
    // int a[6] = {1,2,3,4,5,6};
    // vector<int> v(a, a+6);

    vector<int> v={1,2,3};

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;

    cout << v.size() << endl;

    return 0;
}