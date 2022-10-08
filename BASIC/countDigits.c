// ! C program to Count the Number of Digits ;

#include <stdio.h>

int main()

{

    long long n;

    int i = 0;

    printf("Enter an integer => ");

    scanf("%lld", &n);

    while (n != 0)
    {
        n = n / 10;

        i++;
    }

    printf("Number of digits %d", i);
}
