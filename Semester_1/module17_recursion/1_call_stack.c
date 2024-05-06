#include<stdio.h>

void gello() {
    printf("gello start\n");
    printf("gello end\n");
}

void hello() {
    printf("hello start\n");
    gello();
    printf("hello end\n");
}

int main() {
    printf("main start\n");
    hello();
    printf("main end\n");

    return 0;
}