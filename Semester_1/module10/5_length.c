#include<stdio.h>
int main() {
    char a[100];
    scanf("%s", a);
    int count=0;

    for(int i=0; a[i]!='\0'; i++) {
        count++;
    }
    printf("%d\n", count);

    return 0;
}