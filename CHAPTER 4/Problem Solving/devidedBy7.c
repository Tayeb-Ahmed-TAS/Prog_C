// ! To find the number and sum of all integers greater than 100 and less than 200 that are devided by 7 ;

#include <stdio.h>

int main()

{

    int sum = 0;

    printf("The integers are => ");

    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            printf("   %d", i);

            sum = sum + i;
        }
    }

    printf("\n\nThe Sum is %d", sum);
}
