// ! To check a number is Palindrome or not ;

#include <stdio.h>

int main()

{

    int n, rem, rev = 0;

    printf("Enter an integer => ");

    scanf("%d", &n);

    int temp = n;

    while (temp != 0)
    {

        rem = temp % 10;

        rev = rev * 10 + rem;

        temp = temp / 10;
    }

    (n == rev) ? printf("%d is a Palindrome", n) : printf("%d is not a Palindrome", n);
}
