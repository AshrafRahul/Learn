#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0) {
        if (n % 2 == 0) printf("even\n");
        else printf("odd\n");
    }

    return 0;
}