#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50, 60, 70, 80};
    // list<int> newList;
    // newList = myList;
    // // newList.assign(myList.begin(), myList.end());
    // for(int val: newList) {
    //     cout << val << endl;
    // }

    // myList.push_back(100);
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // myList.push_front(200);
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // myList.pop_back();
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // myList.pop_front();
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // list<int> newList = {100,200,300};
    // vector<int> v = {60, 70, 80};
    // myList.insert(next(myList.begin(), 2), 100);
    // myList.insert(next(myList.begin(), 2), {100,200,300});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end());
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    // replace(myList.begin(), myList.end(), 30, 100);
    // for(int val: myList) {
    //     cout << val << " ";
    // } cout << endl;

    auto it = find(myList.begin(), myList.end(), 40);
    if(it == myList.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "Found" << endl;
    }

    return 0;
}
