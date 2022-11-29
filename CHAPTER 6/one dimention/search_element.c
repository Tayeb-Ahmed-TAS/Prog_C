// ! C Program To Search an Element in an Array

#include <stdio.h>

int main()

{

    int n, i, arr[6] = {5, 88, 36, 41, 25, 9}, f = 0;

    printf("Enter your query => ");

    scanf("%d", &n);

    for (i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {

            f = 1;

            break;
        }
    }

    (f == 1) ? printf("%d is found in the position = %d", n, i + 1) : printf("%d is not found in the array", n);

    return 0;
}
