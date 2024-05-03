#include<stdio.h>
int main() {
    int arr[5] = {10,20,30,40,50};
    printf("0th index address: %p\n", &arr[0]);
    printf("0th index address: %p\n\n", arr);

    printf("0th index value: %d\n", arr[0]);
    printf("0th index value: %d\n\n", *arr);

    printf("1th index address: %p\n", &arr[1]);
    printf("1th index address: %p\n\n", arr+1);

    printf("1th index value: %d\n", arr[1]);
    printf("1th index value: %d\n\n", *(arr+1));
    
    printf("2nd index value: %d\n", 2[arr]);
    printf("2nd index value: %d\n\n", *(2+arr));

    return 0;
}