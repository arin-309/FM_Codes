#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i=0;       //loop variable
    int l=0;       //string length
    int v=0;       //vowel counter

    printf("Enter a string: ");   //accepting string
    fgets(str, 100, stdin);

    l = strlen(str);          //storing length of string

    for(i=0; i<l; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')            //checking to find vowels using OR and EQUAL to operators
        {
            v++;      //vowel counter
        }
    }

    printf("Number of vowels in the string: %d", v);        //number of vowels found

    return 0;
}