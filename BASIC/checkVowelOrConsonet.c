// ! C program to Check Vowel or consonant ;

#include <stdio.h>
#include <ctype.h>

int main()

{

    char c, low, upp;

    printf("Enter an alphabet : ");

    scanf("%c", &c);

    low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    upp = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    (!isalpha(c)) ? printf("Error! Non-alphabetic character.") : ((low || upp) ? printf("%c is a Vowel", c) : printf("%c is a Consonant", c));
}
