// ! C program that takes a floating point number as input and display the floating point and integer part separately ;

#include <stdio.h>

int main()
{

    int a;

    float b;

    printf("Enter a floting point number => ");

    scanf("%f", &b);

    printf("\nThe number is %f\n\n", b);

    a = b;

    b = b - a;

    printf("Integer part is %d\n\n", a);

    printf("Floating point is %f", b);

    return 0;
}
