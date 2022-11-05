#include <stdio.h>

int main()

{

    float c, f;

    printf("Please Enter The Temperature in Fahrenheit: ");

    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("\n%f degree Fahrenheit = %f degree Celsius", f, c);
}