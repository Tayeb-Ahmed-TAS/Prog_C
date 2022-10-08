#include <stdio.h>

int main()

{

    int size, j = 0, k = 0, i, arr[6], evenArr[6], oddArr[6];

    printf("Enter the array elements : \n");

    size = sizeof(arr) / sizeof(int);

    for (i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]);

        (arr[i] % 2 == 0) ? evenArr[j++] = arr[i] : oddArr[k++] = arr[i];
    }

    printf("Even Elements : ");

    for (i = 0; i < j; i++)
    {

        printf(" %d ", evenArr[i]);
    }

    printf("\nOdd Elements : ");

    for (i = 0; i < k; i++)
    {

        printf(" %d ", oddArr[i]);
    }
}