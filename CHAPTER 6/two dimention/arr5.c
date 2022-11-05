//  ! C program to find the trace of Matrix ;

//  ? n x n বর্গ ম্যাট্রিক্সের ট্রেস হল তির্যক উপাদানগুলির সমষ্টি ;

#include <stdio.h>

int main()

{

    int arr[3][3] = {{9, 5, 8}, {4, 7, 3}, {7, 9, 2}}, i, j;

    printf("The Matrix is => \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int trace = 0;

    for (i = 0; i < 3; i++)
    {

        trace = trace + arr[i][i];
    }

    printf("Trace of Matrix is : %d", trace);
}
