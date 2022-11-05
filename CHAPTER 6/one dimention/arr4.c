//  ! Size of Array / Array Length / Total Number of Array Elements ( with input ) ;

#include <stdio.h>

int main()

{

    int size, array[7];

    size = sizeof(array) / sizeof(int);

    printf("\nSize of this Array is : %d\n\n", size);

    printf("Enter the values of Array : \n");

    for (int i = 0; i <= size - 1; i++)
    {

        scanf("%d", &array[i]);
    }

    for (int i = 0; i <= size - 1; i++)
    {

        printf("\nArray[%d] is %d", i, array[i]);
    }
}
