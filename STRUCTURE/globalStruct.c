// ! Global Structure ;

#include <stdio.h>

struct person
{

    // ? Global Structure ;

    int age;

    float salary;
};

struct person per1, per2; // ? Global Variable ;

int main()

{

    // struct person per1, per2; // ? Local Variable ;

    per1.age = 22;

    per1.salary = 27990.57;

    printf("Person1 =>\nAge: %d\nSalary: %.2f", per1.age, per1.salary);

    per2.age = 27;

    per2.salary = 29874.365;

    printf("\nPerson2 =>\nAge: %d\nSalary: %.2f", per2.age, per2.salary);
}
