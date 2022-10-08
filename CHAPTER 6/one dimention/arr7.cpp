// ! Prime Number of Array With input Array Elements ;

#include <stdio.h>

int main()

{

    int f = 0, size, array[7];

    printf("Enter the array elements : \n");

    size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {

        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0 || array[i] == 1)
        {
            f = 1;
        }

        for (int j = 2; j < array[i] / 2; j++)
        {

            if (array[i] % j == 0)
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

        (array[i] < 0) ? (printf("Array[%d] = %d is a negative number", i, array[i])) : ((f == 0) ? (printf("Array[%d] = %d is a Prime number", i, array[i])) : (printf("Array[%d] = %d is Not a Prime number", i, array[i])));
    }
}
