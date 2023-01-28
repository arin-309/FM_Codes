#include<stdio.h>
int main(){
    char choice;
    int n,i,j,k,l,m;

    printf("Enter the number of elements: ");        //accepting number of elements in array
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements: \n");               //accepting each element in the array with n elements 
    for (l = 0; l < n; l++) {
        scanf("%d", &array[l]);                    //loop to store individual values at l positions 
    }
    printf("Select sorting method:\n1. Bubble sort\n2. selection sort\nEnter your choice: ");         //accepting choice of user
    scanf("%d", &choice);

    if (choice == 1) {
    for (i = 0; i < n - 1; i++) {            //outer loop
        for (j = 0; j < n - i - 1; j++) {    //inner loop
            if (array[j] > array[j + 1]) {
                k = array[j];
                array[j] = array[j + 1];     //sorting is done one at a time by checking 2 elements 
                array[j + 1] = k;
            }
        }
    }
    printf("Sorted array: ");        //output array
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);     //printing in new order
    }
    } 
    
    else if (choice == 2) {
        int min_no; 
    for (i = 0; i < n - 1; i++) {                //outer loop
        min_no = i;
        for (j = i + 1; j < n; j++) {            //inner loop
            if (array[j] < array[min_no]) {
                min_no = j;
            }
        }
        k = array[min_no];           //sorting the elements one by one by looking for the smallest value integer
        array[min_no] = array[i];
        array[i] = k;
    }
    printf("Sorted array: ");       //output array
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);    //printing new order 
    }
    } 
    
    else {
        printf("Invalid choice\n");      //default output incase of wrong selection
    }

    return 0;
}