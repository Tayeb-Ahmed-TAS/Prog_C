#include <stdio.h>

int main()

{

    printf("Please enter the year to check !!!\n");

    int y;

    scanf("%d", &y);

    if ((y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0))

        printf("%d is Leap Year", y);

    else

        printf("%d is Not Leap Year", y);

    //  ! Using Ternary Operator

    // ? ((y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0)) ? printf("%d is Leap Year", y) : printf("%d is Not Leap Year", y);
}