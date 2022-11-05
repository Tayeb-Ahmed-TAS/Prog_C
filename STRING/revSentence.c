// ! Reverse a sentence ;

#include <stdio.h>
#include <string.h>

int main()

{

    char input[1000];

    puts("Enter a setence => ");

    gets(input);

    strrev(input);

    puts(input);
}