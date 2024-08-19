#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for(int i=1; i<=10; i++) {
        v.push_back(i);
    }

    cout << "Initial vector properties: " << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;
    cout << endl;

    v.resize(20, 0);
    cout << "After resizing the 20 elements: " << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    v.clear();
    cout << "After clear the vector elememts: " << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    cout << "Is the vector is empty? " << (v.empty() ? "Yes" : "No") << endl;
    cout << endl;

    cout << "After resizing back to 10 elements and filling with 100: " << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Elements: " << endl;
    for(int num: v) cout << num << " ";
    cout << endl;

    return 0;
}