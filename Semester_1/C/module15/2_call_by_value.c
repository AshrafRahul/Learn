#include<stdio.h>

void fun(int x) {
    // printf("Address of fun x: %p\n", &x);
    x=200;
}

int main() {
    int x=10;
    // printf("Address of main x: %p\n", &x);
    fun(x);
    printf("Value of main x: %d\n", x);

    return 0;
} 