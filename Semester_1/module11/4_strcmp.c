#include<stdio.h>
#include<string.h>
int main() {
    char a[100], b[100];
    scanf("%s %s", a,b);
    
    int val = strcmp(a,b);
    printf("%d\n", val);

    if(val < 0) {
        printf("%d: A is smaller\n", val);
    }
    else if(val > 0) {
        printf("%d: B is smaller\n", val);
    }
    else {
        printf("%d: same\n", val);
    }

    return 0;
}