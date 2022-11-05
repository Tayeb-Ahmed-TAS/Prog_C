#include <stdio.h>

int main()

{
    int i, y, z;

    printf("Please Enter a Value of i : ");

    scanf("%d", &i);

    y = i++; // todo: i will increase but y will not increase;

    printf("Result for i++. y = %d  &&  i = %d", y, i);

    // z = ++i; // todo: i and z both will increase;

    // printf("\nResult for ++i. z = %d  &&  i = %d", z, i);
}