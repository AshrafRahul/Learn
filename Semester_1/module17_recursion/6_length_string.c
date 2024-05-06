#include<stdio.h>

int fun(char a[], int i) {
    //base case
    if(a[i]=='\0') return 0;
    int l = fun(a, i+1);
    return l+1;
}

int main() {
    char a[6] = "ashraf";
    int length = fun(a, 0);
    printf("%d\n", length);

    return 0;
}