// ! C Program to Calculate Standard Deviation ;

#include <stdio.h>
#include <math.h>

int main()

{

    int n;

    float sum = 0, mean, sd = 0, div;

    printf("Enter array length => ");

    scanf("%d", &n);

    float arr[n];

    printf("Enter Elements => \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);

        sum = sum + arr[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        sd = sd + pow(arr[i] - mean, 2);
    }

    sd = sqrt(sd / n);

    printf("\nStandard Deviation of %d items = %.3f", n, sd);

    return 0;
}
