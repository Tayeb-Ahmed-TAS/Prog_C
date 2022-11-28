// ! C Program to find the area and perimeter of the triangle
// ? Formula : perimeter = a + b + c
// ? Formula : semi-perimeter , s = ( a + b + c ) / 2
// ? Formula : area = sqrt[s * ( s - a ) * ( s - b ) * ( s - c )]
// ! note: The sum of 2 sides of a triangle is greater than the third side

#include <stdio.h>
#include <math.h>

int main()

{

    float a, b, c, area, perimeter, s;

    printf("Enter side , a => ");

    scanf("%f", &a);

    printf("Enter base , b => ");

    scanf("%f", &b);

    printf("Enter side , c => ");

    scanf("%f", &c);

    if (a < (b + c) && b < (a + c) && c < (a + b))
    {

        perimeter = a + b + c;

        s = perimeter / 2;

        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Area => %.2f\nSemi-perimeter => %.2f\nPerimeter => %.2f", area, s, perimeter);
    }
    else
    {
        printf("Not a triangle ! The sum of the 2 sides of the triangle must be greater than the third side !");
    }

    return 0;
}
