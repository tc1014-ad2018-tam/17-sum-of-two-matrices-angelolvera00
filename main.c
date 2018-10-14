#include <stdio.h>

int main() {
   int r, c, a[10][10], b[10][10], sum[10][10], i, j;

do {
    printf("Enter number of rows (between 2 and 10): ");
    scanf("%d", &r);
}while (r<=1||r>=11);
do {
    printf("Enter number of columns (between 2 and 10): ");
    scanf("%d", &c);
}while(c<=1||c>=11);
    printf("\n Enter elements of the first matrix:\n");

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum of the two matrix is: \n\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d     ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    return 0;
}