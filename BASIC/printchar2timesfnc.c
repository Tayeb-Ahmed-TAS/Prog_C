// ! Print Lowercase and Uppercase alphabets using function ;

#include <stdio.h>

char myFnc();

int main()

{

    for (int i = 1; i <= 2; i++)
    {

        myFnc();
    }
}

char myFnc()
{

    int n;

    printf("Enter 0 to display uppercase alphabets and 1 to display lowercase alphabets =>\n");

    scanf("%d", &n);

    if (n == 0)
    {

        for (int i = 65; i <= 90; i++)
        {

            // ? A === 65 && Z === 90 ;

            printf("%c  ", i);
        }
    }
    else if (n == 1)
    {

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

    printf("\n");
}
