//  ! Delete an element of array ;

#include <stdio.h>

int main()

{

    int arr[100], pos, i, n;

    printf("Enter number of elements in Array : ");

    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the location where you wish to delete element : ");

    scanf("%d", &pos);

    if (pos > n)
    {
        printf("Deletion not possible !!!");
    }
    else
    {

        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        for (i = 0; i < n - 1; i++)
        {
            printf("Array[%d] = %d \n", i, arr[i]);
        }
    }
}
