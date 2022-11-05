#include <stdio.h>

int main()

{

    float a, b;

    char op;

    printf("Type in your expression => ");

    scanf("%f%c%f", &a, &op, &b);

    printf("\nThe result is ");

    if (op == '+')
    {
        printf("%.2f\n", a + b);
    }
    else if (op == '-')
    {
        printf("%.2f\n", a - b);
    }
    else if (op == '*')
    {
        printf("%.2f\n", a * b);
    }
    else if (op == '/')
    {
        (b == 0) ? printf("Infinity\n") : printf("%.2f\n", a / b);
    }
    else
    {
        printf("Error !!!");
    }

    return 0;
}
