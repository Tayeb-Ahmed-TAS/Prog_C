// ! Merge two array in asceding order ;

#include <stdio.h>

int main()

{

    int arr[5] = {1, 2, 56, 4, 11}, arr2[7] = {6, 5, 2, 3, 7, 8, 10}, merge[1000], i, temp;

    int len1 = sizeof(arr) / sizeof(int);

    int len2 = sizeof(arr2) / sizeof(int);

    int len3 = len1 + len2;

    for (i = 0; i < len1; i++)
    {
        merge[i] = arr[i];
    }

    int k = i;

    for (i = 0; i < len2; i++)
    {
        merge[k] = arr2[i];

        k++;
    }

    for (i = 0; i < len3; i++)
    {
        for (int j = i + 1; j < len3; j++)
        {
            if (merge[i] > merge[j])
            {
                temp = merge[i];

                merge[i] = merge[j];

                merge[j] = temp;
            }
        }
    }

    for (i = 0; i < len3; i++)
    {
        printf("%d\t", merge[i]);
    }
}
