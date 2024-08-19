#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> str(n);

    for(int i=0; i<n; i++) cin >> str[i];

    for(int i=0; i<n; i++) str[i][0] = toupper(str[i][0]);

    for(int i=0; i<n; i++) cout << str[i] << endl;

    return 0;
}