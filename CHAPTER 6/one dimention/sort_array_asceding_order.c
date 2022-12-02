// ! Sort an array in asceding order ;

#include <stdio.h>

int main()

{

    int temp, i, j, arr[8] = {55, 4, 22, 36, 98, 25, 7, 19};

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];

                arr[i] = arr[j];

                arr[j] = temp;
            }
        }
    }

    printf("Sort in asceding order :- \n");

    for (i = 0; i < 8; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
