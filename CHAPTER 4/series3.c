// ! 12+14+16+.......+200 ;

#include <stdio.h>

int main()
{

    int i, n, s = 0;

    for (i = 12; i <= 200; i=i+2)
    {
        s = s + i;
    }

    printf("%d", s);
}