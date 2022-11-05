#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i >= 1; i++)
    {

        if (i >= 888)
        {

            break;
        }
        else
        {

            (i > 9 && i <= 99) ? printf(" %d. Hello Bangladesh\n", i) : (i > 99 && i <= 999) ? printf("%d. Hello Bangladesh\n", i)
                                                                                             : printf("  %d. Hello Bangladesh\n", i);
        }
    }
}