#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {50,20,30,20,40,50,10,30,10,10};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();

    for(int val: myList) {
        cout << val << " ";
    } cout << endl;

    return 0;
}
