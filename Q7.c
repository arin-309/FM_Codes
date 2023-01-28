#include <stdio.h>
#include <string.h>

int main() {
    char str[100];           //sting storing variable
    int i, j, l;             
    int palindrome = 0;     //palindrome checking variable 

    printf("Enter a word:  ");
    gets(str);

    l = strlen(str);        //storing length of string in l

    for(i = 0; i < l; i++) {
        if(str[i] != str[l-i-1]) {        //if character at i and l-i-1 are the same for every value of i, then the word is a palindrome
            palindrome = 1;
            break;
        }
    }

    if(palindrome==0) {             //condition for string entered to be a palindrome
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}