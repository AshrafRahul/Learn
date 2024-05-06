#include<stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int printRow;
    scanf("%d", &printRow);
    printf("Values of %dno row: ", printRow);
    for(int j=0; j<col; j++) {
        printf("%d ", a[printRow][j]);
    } printf("\n\n");

    int printCol;
    scanf("%d", &printCol);
    printf("Values of %dno col: ", printCol);
    for(int i=0; i<row; i++) {
        printf("%d ", a[i][printRow]);
    } printf("\n");

    return 0;
}