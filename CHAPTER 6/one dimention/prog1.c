#include <stdio.h>
#include <string.h>

int main()

{

    char s1[100], s2[100], s3[100];

    int l1, l2, l3, x;

    printf("Enter the first string : ");

    scanf("%s", &s1);

    printf("Enter the second string : ");

    scanf("%s", &s2);

    x = strcmp(s1, s2);

    if (x != 0)
    {
        printf("\nStrings are not same !");

        strcat(s1, s2);
    }
    else
    {
        printf("\nStrings are same !");
    }

    strcpy(s3, s1);

    l1 = strlen(s1);

    l2 = strlen(s2);

    l3 = strlen(s3);

    printf("\nS1=%s\tLength=%d characters", s1, l1);

    printf("\nS2=%s\tLength=%d characters", s2, l2);

    printf("\nS3=%s\tLength=%d characters", s3, l3);
}
