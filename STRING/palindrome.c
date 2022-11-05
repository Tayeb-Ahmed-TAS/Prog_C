// ! To check a string is Palindrome or not ;

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000];

    printf("Enter a word => ");

    gets(string1); // ! Take input;

    strcpy(string2, string1); // ! Copy string1 in string2;

    strrev(string2); // ! Reverse this string;

    int compare = strcmp(string1, string2);

    // ? If both strings are same then it will return 0;

    (compare == 0) ? printf("\nThis word is Palindrome") : printf("\nThis word is not Palindrome");
}