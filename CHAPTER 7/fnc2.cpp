// ! Prime Numbers Between Two Integers;
// ? if f==0 then prime ;

#include <stdio.h>
#include <conio.h>

int checkPrime(int prime);

int main()

{

    int f = 0, fNum, lNum;

    printf("Enter the first value : ");

    scanf("%d", &fNum);

    printf("Enter the last value : ");

    scanf("%d", &lNum);

    // ? Swap Numbers if fNum>lNum ;

    if (fNum > lNum)
    {
        fNum = fNum + lNum;

        lNum = fNum - lNum;

        fNum = fNum - lNum;
    }

    printf("The Prime Numbers Between %d and %d are => ", fNum, lNum);

    for (int i = fNum + 1; i < lNum; i++)
    {
        f = checkPrime(i);

        if (f == 0)
        {
            printf("%d ", i);
        }
    }

    getchar();
}

int checkPrime(int prime)

{

    int f = 0;

    if (prime == 0 || prime == 1)
    {
        f = 1;
    }

    for (int j = 2; j <= prime / 2; j++)
    {
        if (prime % j == 0)
        {
            f = 1;

            break;
        }
    }

    return f;
}