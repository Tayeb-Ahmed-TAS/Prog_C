// ! C Program to Find Largest Element in an Array

#include <stdio.h>

int main()

{

    int i, arr[10] = {10, 25, 65, 14, 21, 98, 44, 12, 9, 33};

    // ? storing the largest number to arr[0]

    for (i = 1; i < 10; i++)
    {

        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    printf("Largest element = %d", arr[0]);

    return 0;
}
