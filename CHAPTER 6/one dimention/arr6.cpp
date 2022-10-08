// ! Prime Number of Array ;

#include <stdio.h>

int main()

{

    int i, f = 0, arr[7] = {5, 10, 7, 17, -5, 89, 44};

    int size = sizeof(arr) / sizeof(int);

    for (i = 0; i < size; i++)
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

        (arr[i] < 0) ? (printf("Array[%d] = %d is a negative number", i, arr[i])) : ((f == 0) ? (printf("Array[%d] = %d is a Prime number", i, arr[i])) : (printf("Array[%d] = %d is Not a Prime number", i, arr[i])));
    }
}