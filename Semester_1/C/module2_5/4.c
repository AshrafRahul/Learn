#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) printf("zero\n");
    else if(n > 0) printf ("positive\n");
    else printf("negative\n");

    return 0;
}