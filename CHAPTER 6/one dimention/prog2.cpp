#include <stdio.h>
#include <string.h>

int main()

{

    char s[100];

    printf("Enter the text : ");

    gets(s); // ! Takes input with white space ;
    
    printf("\nLower case of string : %s", strlwr(s));

    printf("\nUpper case of string : %s", strupr(s));

    printf("\nReverse of string : %s", strrev(s));

    printf("\nLength of string : %d", strlen(s));
}