#include<stdio.h>
int main() {
    int x = 100;
    int* ptr = &x;

    printf("Address of x: %p\n", &x);
    printf("Value of ptr: %p\n", ptr);
    printf("Value of ptr: %p\n", &ptr);
    printf("Memory size of ptr: %d\n", sizeof(ptr));

    return 0;
}