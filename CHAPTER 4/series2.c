// ! 5+7+9+.......+99 ;

#include <stdio.h>

int main()
{

    int i, n, s = 0;

    for (i = 5; i <= 99; i=i+2)
    {
        s = s + i;
    }

    printf("%d", s);
}