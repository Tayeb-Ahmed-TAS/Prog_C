// ! C program to Add Two Distances (in inch-feet system) using Structures ;

#include <stdio.h>

struct measure
{

    int feet;

    float inch;
};

int main()

{

    struct measure dis1, dis2, sum;

    printf("Enter 1st distance \nEnter feet =>");

    scanf("%d", &dis1.feet);

    printf("Enter inch =>");

    scanf("%f", &dis1.inch);

    printf("Enter 2nd distance \nEnter feet =>");

    scanf("%d", &dis2.feet);

    printf("Enter inch =>");

    scanf("%f", &dis2.inch);

    sum.feet = dis1.feet + dis2.feet;

    sum.inch = dis1.inch + dis2.inch;

    if (sum.inch >= 12)
    {

        int rem = (sum.inch / 12);

        sum.feet = sum.feet + rem;

        sum.inch = sum.inch - rem * 12;
    }

    printf("Sum of distances = %d' %.1f\"", sum.feet, sum.inch);
}
