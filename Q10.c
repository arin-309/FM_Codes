#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j, sum = 0;
    int d1 = 0, d2 = 0;

    for (i = 0; i < 4; i++) {                       //accepting values of each position in 4 by 4 matrix
        for (j = 0; j < 4; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix: \n");                           //presenting output in form of a matrix
    for (i = 0; i < 4; i++) {                       //outer loop of rows
        for (j = 0; j < 4; j++) {                   //inner loop for each element in the row
            printf("%d ", matrix[i][j]);            //value at that position in the matrix
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {                       //adding each element entered to find total sum
        for (j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);

    for (i = 0; i < 4; i++) {                      // Add elements of both diagonals
        d1 += matrix[i][i];
        d2 += matrix[i][3-i];
    }
    printf("Sum of right diagonal: %d\n", d1);                       //displaying sum of right diagonal
    printf("Sum of left diagonals: %d\n", d2);                        //displaying sum of left diagonal
    printf("Sum of both diagonals: %d\n", d1 + d2);                   //sum of diagonals d1 and d2

    return 0;
}