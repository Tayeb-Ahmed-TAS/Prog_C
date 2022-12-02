// ! Sort an array in ascending order using function ;

#include <stdio.h>

int sort_array(int arr_f[], int n);

int main()
{

    int arr[8] = {55, 4, 22, 36, 98, 25, 7, 19}, len, sort;

    len = sizeof(arr) / sizeof(int);

    printf("Sort in ascending order :-\n");

    sort_array(arr, len);

    return 0;
}

int sort_array(int arr_f[100], int n)
{

    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr_f[i] > arr_f[j])
            {
                temp = arr_f[i];

                arr_f[i] = arr_f[j];

                arr_f[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr_f[i]);
    }
}
