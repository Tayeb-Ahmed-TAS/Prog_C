//  ! Size of Array / Array Length / Total Number of Array Elements ;

#include <stdio.h>

int main()

{

    int size, array[] = {5, 56, 25, 16, 33, 45};

    size = sizeof(array) / sizeof(int);

    printf("\nSize of this Array is : %d\n", size);
}