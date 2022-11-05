#include<stdio.h>

int main()

{
    printf("Please Enter The Numbers !!!\n");

int num1,num2,sum,remainder,division;

printf("FIRST NUMBER : ");

scanf("%d",&num1);

printf("\n The First Number is %d \n",num1);

printf("Last Number : ");

scanf("%d",&num2);

printf("\n The Last Number is %d \n",num2);

sum=num1+num2;

printf("The Total Value is %d \n",sum);

remainder=num1%num2;

printf("The Remainder Value is %d \n",remainder);

division=num1/num2;

printf("The Division Value is %d",division);

}