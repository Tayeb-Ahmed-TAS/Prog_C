// ! C Program to find the area and perimeter of the rectangle
// ? Formula : area = length * width
// ? Formula : perimeter = 2 * ( length + width )

#include <stdio.h>

int main()

{

    int length, width, area, perimeter;

    printf("Enter the length of the rectangle => ");

    scanf("%d", &length);

    printf("Enter the width of the rectangle => ");

    scanf("%d", &width);

    area = length * width;

    perimeter = 2 * (length + width);

    printf("Area => %d \nPerimeter => %d", area, perimeter);

    return 0;
}
