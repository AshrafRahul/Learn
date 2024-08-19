#include<bits/stdc++.h>
using namespace std;

int main() {
    int *a = new int[3];
    for(int i=0; i<3; i++) cin >> a[i];
    for(int i=0; i<3; i++) cout << a[i] << " ";
    cout << endl;
    delete[] a;
    for(int i=0; i<3; i++) cout << a[i] << " ";

    return 0;
}
