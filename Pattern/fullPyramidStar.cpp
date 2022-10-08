// ! Full Pyramid of * ;
// ? Output:
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// ! Video link : https://youtu.be/_YeOERaD81M

#include <stdio.h>

int main()

{

    int r;

    printf("Enter the Row number : ");

    scanf("%d", &r);

    // ? Here i === Row && j === Coloum ;

    for (int i = 1; i <= r; i++)
    {

        for (int j = 1; j <= r - i; j++)
        {
            // todo: This loop for space ;

            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            // todo: This loop for * ;

            printf("*");
        }

        printf("\n");
    }
}
