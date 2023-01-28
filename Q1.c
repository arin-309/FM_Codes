#include <stdio.h>

int main() {
    int i, j;
    int rows=5;        //declaring number of rows

    for(i=1; i<=rows; ++i) {              // i is used to set the number of rows in order 
        for(j=1; j<=i; ++j) {             //j is used to determine the number of * in each row
            printf("*");                  //printing desired number of *
        }
        printf("\n");            //shifting line for next row
    }
    return 0;
}