#include<stdio.h>

int main()

{

float c,f;

printf("Please Enter The Temperture in Celsius: ");

scanf("%f",&c);

f=((c*5)/9)+32;

printf("\n%f degree Celsius = %f degree Fahrenheit",c,f);

}