// ! Delete Prime Numbers from Array With input Array Elements ;

#include <stdio.h>

int main()

{

    int size, f = 0, arr[7], newArr[7];

    printf("Enter the Array Elements : \n");

    size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0 || arr[i] == 1)
        {
            f = 1;
        }

        for (int j = 2; j <= arr[i] / 2; j++)
        {

            if (arr[i] % j == 0)
            {
                f = 1;

                break;
            }
            else
            {
                f = 0;
            }
        }

        printf("\n");

        (arr[i] < 0) ? (printf("Array[%d] = %d is a negative Number", i, arr[i])) : ((f == 0) ? (printf("Array[%d] = %d is a Prime Number", i, arr[i])) : (printf("Array[%d] = %d is not a Prime Number", i, arr[i])));
    }
}
