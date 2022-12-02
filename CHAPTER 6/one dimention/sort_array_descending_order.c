// ! Sort an array in descending order ;

#include <stdio.h>

int main()

{

    int temp, i, j, arr[8] = {15, 25, 7, 94, 21, 9, 19, 12};

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];

                arr[i] = arr[j];

                arr[j] = temp;
            }
        }
    }

    printf("Sort in descending order :-\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
