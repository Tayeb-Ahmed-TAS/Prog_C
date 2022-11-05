// ! C program to Find Roots of a Quadratic Equation ;
// ! The standard form of a quadratic equation is =>     ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>

int main()

{

    float root1, root2, a, b, c, d;

    printf("Enter coefficients a, b and c => \n");

    scanf("%f%f%f", &a, &b, &c);

    d = pow(b, 2) - (4 * a * c);

    if (a == 0)
    {

        root1 = root2 = (-c / b);

        printf("There is only one root. \t The root is  Root1 = Root2 = %f", root1);
    }
    else
    {

        if (d > 0)
        {

            printf("The roots are Real and Unequal\n");

            root1 = (-b + sqrt(d)) / (2 * a);

            root2 = (-b - sqrt(d)) / (2 * a);

            printf("The roots are  Root1=%f  and  Root2=%f", root1, root2);
        }
        else if (d == 0)
        {

            printf("The roots are Real and Equal\n");

            root1 = root2 = (-b / (2 * a));

            printf("The roots are  Root1 = Root2 = %f", root1);
        }
        else
        {

            printf("The Roots are Imaginary");
        }
    }
}
