#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {10,20,30};
    // cout << myList.max_size() << endl;
    cout << myList.size() << endl;
    for(int val: myList) {
        cout << val << " ";
    } cout << endl;

    myList.resize(2);
    for(int val: myList) {
        cout << val << " ";
    } cout << endl;

    myList.resize(5);
    for(int val: myList) {
        cout << val << " ";
    } cout << endl;
    
    // myList.clear();
    // cout << myList.size() << endl;
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    return 0;
}
