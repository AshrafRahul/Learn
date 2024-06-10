#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s = "Hello world";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;

    // string s="Hello";
    // cout << s << endl;
    // cout << s.size() << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;

    // string s="Hello";
    // s.clear();
    // if(s.empty()==true) cout << "Empty" << endl;
    // else cout << "Not empty" << endl;

    string s;
    cin >> s;
    s.resize(5);
    cout << s.size() << endl;
    cout << s << endl;
    s.resize(8, 'x');
    cout << s.size() << endl;
    cout << s << endl;

    return 0;
}
