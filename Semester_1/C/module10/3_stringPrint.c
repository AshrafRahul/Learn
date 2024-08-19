#include<stdio.h>
int main() {
    char a[5] = "Rahul";
    printf("%s", a);

    printf("\n\n");
    char c[6] = "Rahul\0";
    printf("%s", c);

    return 0;
}