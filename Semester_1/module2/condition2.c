#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);

    if(tk >= 100) {
        printf("Burger khabo\n");
    } else if(tk >= 50) {
        printf("Fuchka khabo\n");
    } else {
        printf("Khabo na kisui\n");
    }

    return 0;
}