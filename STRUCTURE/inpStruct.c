// ! C program to Store Information of two Student Using Structure ;

#include <stdio.h>

struct students
{

    int roll;

    float marks;
};

int main()

{

    struct students student1, student2;

    printf("Enter info for Student1 => \n");

    printf("Roll : ");

    scanf("%d", &student1.roll);

    printf("Marks : ");

    scanf("%f", &student1.marks);

    printf("\n\nEnter info for Student2 => \n");

    printf("Roll : ");

    scanf("%d", &student2.roll);

    printf("Marks : ");

    scanf("%f", &student2.marks);

    printf("\n\nRoll : %d\tMarks : %.2f", student1.roll, student1.marks);
    printf("\n\nRoll : %d\tMarks : %.2f", student2.roll, student2.marks);
}
