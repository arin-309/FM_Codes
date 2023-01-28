#include <stdio.h>

void bubble_sort(int array[], int n) {                     //function for bubble sort with its parameters 
    int i, j, k;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                k = array[j];                      //sorting is done one at a time by checking 2 elements
                array[j] = array[j + 1];
                array[j + 1] = k;
            }
        }
    }
}

void selection_sort(int array[], int n) {              //function for selection sort with its parameters
    int i, j, min_no, k;
    for (i = 0; i < n - 1; i++) {
        min_no = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min_no]) {
                min_no = j;                            //sorting the elements one by one by looking for the smallest value integer
            }
        }
        k = array[min_no];
        array[min_no] = array[i];
        array[i] = k;
    }
}

int main() {
    int n, i, choice;                                 //declaring variables 
    printf("Enter the number of elements: ");         //accepting number of elements in the array
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements:\n");                //accepting elements of array with n elements 
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Select sorting method:\n1. Bubble sort\n2. selection sort\nEnter your choice: ");   //accepting choice from the user
    scanf("%d", &choice);
    if (choice == 1) {
        bubble_sort(array, n);                     //using bubble sort function with its arguments 
    } else if (choice == 2) {
        selection_sort(array, n);                 //using selection sort function with its arguments 
    } else {
        printf("Invalid choice!\n");             //output incase wrong input is given
        return 0;
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}