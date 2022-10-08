#include <stdio.h>

int sum(int a, int b)

{

    return a + b;
}

int main()

{

    int num1, num2;

    printf("Enter Two Numbers : \n");

    scanf("%d%d", &num1, &num2);

    printf("The Sum is : %d", sum(num1, num2));
}
