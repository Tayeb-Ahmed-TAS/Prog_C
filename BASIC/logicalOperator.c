#include<stdio.h>

int main()

{

float n;

int m;

printf("Enter any floating point number\n");

scanf("%f",&n);

m=n;

printf("The integer part is = %d\n",m);

printf("The floating part is = %.2f\n",n-m);

return 0;

}