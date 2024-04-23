#include<stdio.h>
int main() {
    char a[100];
    gets(a);
    printf("%s", a);
    printf("\n\n");

    fgets(a, 10, stdin);
    printf("%s", a);

    return 0;
}