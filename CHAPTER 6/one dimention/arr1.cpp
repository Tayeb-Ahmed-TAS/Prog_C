#include <stdio.h>

int main()

{

    int i, arr[5];

    printf("Enter the values : \n");

    for (i = 2; i <= 10; i = i + 2)
    {

        scanf("%d", &arr[i]);
    }

    for (i = 2; i <= 10; i = i + 2)
    {

        printf("OutPut for i = %d is %d\n", i, arr[i]);
    }
}
