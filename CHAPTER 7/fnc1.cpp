// ! Basic Function call ;

#include <stdio.h>

int myFunction(int a, int b);

int main()

{

    myFunction(10, 20);

    getchar();
}

int myFunction(int a, int b)
{

    int s = a + b;

    printf("Hello World\n\n");

    printf("The Sum is => %d\n", s);

    return 0;
}
