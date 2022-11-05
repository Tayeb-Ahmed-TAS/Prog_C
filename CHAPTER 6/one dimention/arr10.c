// ! C program to print the square of array elements ;

#include <stdio.h>
#include <math.h>

int main()

{

    int arr[6] = {1, 4, 3, 6, 7, 9};

    printf("Array Elements : ");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\nSquare of array elements: ");

    for (int i = 0; i < 6; i++)
    {
        int cal = pow(arr[i], 2);

        printf(" %d ", cal);
    }
}
