#include <stdio.h>

int main()

{

    int s, e, i;

    printf("Enter the starting value: \n");

    scanf("%d", &s);

    printf("Enter the ending value: \n");

    scanf("%d", &e);

    i = s;

    do
    {

        printf("%d. Hello World\n", i);

        i++;

    } while (i <= e);

    // ! For Infinite Loop ;

    // for (;;)
    // {

    //     printf("I Love You Virus\n");
    // }
}