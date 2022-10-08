// ! Print Lowercase/Uppercase alphabets ;

#include <stdio.h>

int main()

{

    char n;

    printf("Enter U/u to display uppercase alphabets and L/l to display lowercase alphabets =>\n");

    scanf("%c", &n);

    if (n == 85 || n == 117)
    {

        // ? U === 85 && u === 117 ;

        for (int i = 65; i <= 90; i++)
        {

            // ? A === 65 && Z === 90 ;

            printf("%c  ", i);
        }
    }
    else if (n == 76 || n == 108)
    {

        // ? L === 76 && l === 108 ;

        for (int i = 97; i <= 122; i++)
        {

            // ? a === 97 && z === 122 ;

            printf("%c  ", i);
        }
    }
    else
    {

        printf("Error! You entered an invalid character");
    }
}
