// ! Reverse a sentence using function ;

#include <stdio.h>
#include <string.h>

int reverse(char inp[1000]);

int main()

{

    char inp[1000];

    reverse(inp);

    puts(inp);
}

int reverse(char inp[1000])
{

    puts("Enter a sentence =>");

    gets(inp);

    strrev(inp);

    puts("\nIn reverse =>");

    return 0;
}
