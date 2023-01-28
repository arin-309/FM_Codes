#include <stdio.h>

int main() {

    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);                          //storing number of rows

    for (i = 1; i <= rows; i++) {                // i is used to set the number of rows in order 
        for(j=1; j<=i; ++j) {                    //j is used to determine the number of * in each row
            printf("*");                         //printing desired number of 
        }
        printf("\n");
    }

    return 0;
}