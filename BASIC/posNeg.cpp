#include<stdio.h>

int main()

{

int n;

printf("Please Enter a Number: ");

scanf("%d",&n);

(n >= 0) ? printf("\n%d is Positive",n) : printf("\n%d is Negative",n);

}