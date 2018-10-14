/* This program was made for the purpose of asking the user for the amount of rows and columns he wants on a matrix,
 * based on this information, the program will then asks the user to input one by one the numbers they want on each of
 * the two matrix. At the end, the program will display the sum of the 2 matrixes
 *
 * Author: Angel Olvera
 * October 13, 2018
 * Mail: angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
    //Variables are declared
   int r, c, a[10][10], b[10][10], sum[10][10], i, j;
//I made a loop that will stop the user from continuing because they did not enter a number in the specified range
do {
    printf("Enter number of rows (between 2 and 10): ");
    scanf("%d", &r);
}while (r<=1||r>=11);
//I made a loop that will stop the user from continuing because they did not enter a number in the specified range
do {
    printf("Enter number of columns (between 2 and 10): ");
    scanf("%d", &c);
}while(c<=1||c>=11);
//Asks the user to input all the values of the first matrix, after they enter a number, the program will continue onto the
//next one
    printf("\n Enter elements of the first matrix:\n");

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        //Asks the user to input all the values of the second matrix, after they enter a number, the program will
        // continue onto the next one.
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        //Performs the sum of the two matrixes
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
        //Displays the sum of the matrixes
    printf("\nSum of the two matrixes is: \n\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d     ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
    return 0;
}