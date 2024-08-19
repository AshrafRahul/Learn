#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);

    if(tk > 5000) {
        if(tk >= 1000) {
            printf("Saint martin jabo\n");
        } else {
            printf("Ferot chole jabo\n");
        }
    } else {
        printf("kothao jabo na\n");
    }

    return 0;
}