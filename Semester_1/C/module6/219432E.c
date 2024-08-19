#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int max=0;
    while(n--) {
        long long int num;
        scanf("%lld", &num);

        if(num > max) max = num;
    } printf("%d\n", max);

    return 0;
}