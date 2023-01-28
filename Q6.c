#include<stdio.h>
#include<math.h>          //math header file to perform certain function

int main(){

    double n1, n2, n3;
    int o;
    int t;
    printf("Enter operation you want to perform \n1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n5. Exponential\n6. Trigonometry\n: ");    //asking user for desired mathematical operation
    scanf("%d", &o);

    switch(o){
        case 1:                       //addition
        printf("Enter Number 1: ");
        scanf("%lf", &n1);
        printf("Enter Number 2: ");
        scanf("%lf", &n2);
        n3 = n1 + n2;          //addition operator (+)
        printf("The result after addition is: %lf", n3);
        break;

        case 2:                      //subtraction 
        printf("Enter Number 1: ");
        scanf("%lf", &n1);
        printf("Enter Number 2: ");
        scanf("%lf", &n2);
        n3 = n1 - n2;                //subtraction operator (-)
        printf("The result after subtraction is: %lf", n3);
        break;
 
        case 3:                     //multiplication 
        printf("Enter Number 1: ");
        scanf("%lf", &n1);
        printf("Enter Number 2: ");
        scanf("%lf", &n2);
        n3 = n1 * n2;               //multiplicator operator (*)
        printf("The result after multiplication is: %lf", n3);
        break;

        case 4:                     //division
        printf("Enter Number 1: ");
        scanf("%lf", &n1);
        printf("Enter Number 2: ");
        scanf("%lf", &n2);
        n3 = n1 / n2;              //division operator (/)
        printf("The result after division is: %lf", n3);
        break;

        case 5:                             //Exponent
        printf("Enter base number: ");
        scanf("%lf", &n1);
        printf("Enter exponential Number : ");
        scanf("%lf", &n2);
        n3 = pow(n1,n2);                    //Exponential operator 
        printf("The result after exponent is: %lf", n3);
        break;

        case 6:                             //Trigonometry
        printf("Enter a number: "); 
        scanf("%lf", &n1);
        printf("Enter an operation \n1. sin\n2. cos\n3. tan\n4. cosec\n5. sec\n6. cot\n: ");    //accepting choicde to perfor different trigonometric functions
        scanf(" %d", &t);

          switch (t) {
            case 1:                //sin
            n2 = sin(n1);
            printf("The result is: %lf", n2);
            break;

            case 2:                //cos
            n2 = cos(n1);
            printf("The result is: %lf", n2);
            break; 

            case 3:                 //tan
            n2 = tan(n1);
            printf("The result is: %lf", n2);
            break; 

            case 4:                //cosec
            n2 = 1/sin(n1);
            printf("The result is: %lf", n2);
            break;

            case 5:                //sec
            n2 = 1/cos(n1);
            printf("The result is: %lf", n2);
            break;

            case 6:                //cot
            n2 = 1/tan(n1);
            printf("The result is: %lf", n2);
            break;

            default:                //output incase wrong choice is entered
            printf("Invalid operation entered");

        }
        break;

        default:
        printf("Invalid operation entered");            ////output incase wrong choice is entered
    }

    return 0;
    
}