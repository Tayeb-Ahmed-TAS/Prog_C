// ! Reverse an Array ;

#include <stdio.h>

int main()

{

    int n, i;

    printf("Enter the size of Array => ");

    scanf("%d", &n);

    int arr[n];

    // ? Note: এভাবে n ইনপুট নেওয়ার পর array declare করলে সাইজ ছাড়া array declare করা যায় ;

    printf("\n\n");

    for (i = 0; i < n; i++)
    {

        printf("Enter array element %d => ", i + 1);

        scanf("%d", &arr[i]);
    }

    printf("\n\nArray is => ");

    for (i = 0; i < n; i++)
    {
        printf("    %d", arr[i]);
    }

    printf("\n\nArray in Reverse form => ");

    for (i = n - 1; i >= 0; i--)
    {
        printf("    %d", arr[i]);
    }
}
