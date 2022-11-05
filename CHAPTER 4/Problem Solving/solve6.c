// ! C Program to check occurence of digit in a given number ;

#include <stdio.h>

int main()
{

    int n, m, x, i;

    printf("Enter any number :: ");

    scanf("%d", &n);

    printf("Enter the digit :: ");

    scanf("%d", &m);

    i = 0;

    while (n != 0)
    {
        x = n % 10;

        n = n / 10;

        if (m == x)
        {
            i++;
        }
    }

    printf("The occurrence of %d is %d times", m, i);
}
