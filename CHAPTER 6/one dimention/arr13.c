// ! Merge two array in asceding order (INPUT) ;

#include <stdio.h>

int main()

{

    int len1, len2, len3, i, j, temp;

    printf("Enter the first array length => ");

    scanf("%d", &len1);

    int arr1[len1];

    printf("Enter the elements for first array => ");

    for (i = 0; i < len1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the second array length => ");

    scanf("%d", &len2);

    int arr2[len2];

    printf("Enter the elements for second array => ");

    for (i = 0; i < len2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    len3 = len1 + len2;

    int arr3[len3];

    for (i = 0; i < len1; i++)
    {
        arr3[i] = arr1[i];
    }

    int k = i;

    for (i = 0; i < len2; i++)
    {
        arr3[k] = arr2[i];

        k++;
    }

    for (i = 0; i < len3; i++)
    {
        for (j = i + 1; j < len3; j++)
        {

            if (arr3[i] > arr3[j])
            {

                temp = arr3[i];

                arr3[i] = arr3[j];

                arr3[j] = temp;
            }
        }
    }

    printf("\nArray in asceding order => ");

    for (i = 0; i < len3; i++)
    {
        printf("%d  ", arr3[i]);
    }

    return 0;
}
