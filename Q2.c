#include <stdio.h>

int main() {
    char a;
    int b;
    double c;
    char d[100];

    printf("Enter a character: ");       //accepting character
    scanf("%c", &a);                     // %c is used to read a character    

    printf("Enter an integer: ");        //accepting integer
    scanf("%d", &b);                     // %d is used to read an integer

    printf("Enter a double: ");          //accepting double
    scanf("%lf", &c);                    // %lf is used to read a double
 
    printf("Enter a string: ");          //accepting string
    scanf("%s", d);                      // %s is used to read a string

    // Print the input
    printf("You entered: %c\n", a);
    printf("You entered: %d\n", b);
    printf("You entered: %lf\n", c);
    printf("You entered: %s\n", d);

    return 0;
}


