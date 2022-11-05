// ! C Program to Reverse a Number ;

#include <stdio.h>

int main()

{

    int rev = 0, n, rem, temp;

    printf("Enter an integer => ");

    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {

        rem = temp % 10;

        rev = rev * 10 + rem;

        temp = temp / 10;
    }

    printf("The reverse of %d  =>  %d", n, rev);
}
