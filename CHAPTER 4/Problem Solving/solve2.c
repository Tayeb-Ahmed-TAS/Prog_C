// ! Write a C/C++ Program to Convert Days Into Years Months Weeks and Days ;

#include <stdio.h>

int main()
{

    int year, days, weeks, months;

    printf("Enter number of days : ");

    scanf("%d", &days);

    year = days / 365;

    days = days % 365;

    months = days / 30;

    days = days % 30;

    weeks = days / 7;

    days = days % 7;

    printf("%d Years \n%d Months\n%d Weeks\n%d Days", year, months, weeks, days);
}