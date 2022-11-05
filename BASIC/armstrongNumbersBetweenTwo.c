// ! C Program to Display Armstrong Number Between Two Intervals ;

#include <stdio.h>
#include <math.h>

int main()

{

    int digits = 0, rem, n1, n2, temp, temp2, sum = 0;

    printf("Enter the lower limit => ");

    scanf("%d", &n1);

    printf("Enter the upper limit => ");

    scanf("%d", &n2);

    printf("Armstrong numbers between %d and %d are \n", n1, n2);

    for (int i = n1; i <= n2; i++)
    {

        temp = temp2 = i;

        while (temp != 0)
        {

            // ? For count the digits ;

            temp = temp / 10;

            digits++;
        }

        while (temp2 != 0)
        {

            rem = temp2 % 10;

            sum = sum + pow(rem, digits);

            temp2 = temp2 / 10;
        }

        if (i == sum)
        {

            printf("%d\n", i);
        }

        sum = 0;

        digits = 0;
    }
}
