#include <stdio.h>
#include<stdbool.h>

int main() {
    int n,i; 
    int l = 1;                       //length counter
    int array[100];                  //array declaration
    bool check = 1;
    for (i=0; i<l; i++){
        if(check==1){
            printf("\nEnter element of array: ");         //accepting elements at position i of array
            scanf("%d", &array[i]);
            l++;                                          //incrementing value of l everytime user enters a new element 
            printf("\nWould you like to enter more elements\n1. Yes\n2. No\n:");      //asking user if he wants to coontinue 
            scanf("%d", &n);

            if(n==1){
                check = 1;               //boolean expression to continue the loop
            }
            else if(n==2){
                check = 0;              //changing the value to escape the loop
            }
            else{
                printf("Invalid Choice");   //output for invalid choice
                return 0;
            }
        }
    }
    printf("\nNumber of elements present in the array: %d", l-1);        //printing output which is equal to l
    return 0;
}