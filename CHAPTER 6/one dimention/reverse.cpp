// ! C program to find reverse of array ;

#include <stdio.h>

int main()

{

    int arr[5];

    printf("Input array elements : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray in reverse order: ");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
