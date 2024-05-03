#include<stdio.h>

void fun(int* ar, int n) { //we can write here ar[]
    for(int i=0; i<n; i++) {
        printf("%d ", *(ar+i)); //we can write here ar[i]
    }
}

int main() {
    int ar[5] = {10,20,30,40,50};
    fun(ar, 5);

    return 0;
}