#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()

{

    float r, area, circumference;

    printf("Please Enter The Value of The Radius of Circle: ");

    scanf("%f", &r);

    area = PI * pow(r, 2);

    circumference = 2 * PI * r;

    printf("\nThe Value of The Area of Circle is %f \n", area);

    printf("The Value of The Circumference of Circle is %f", circumference);

    return 0;
}