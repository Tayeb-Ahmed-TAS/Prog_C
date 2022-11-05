// ! Local Structure ;

#include <stdio.h>

int main()

{

    struct person
    {

        int age;

        float salary;
    };

    struct person per1, per2;

    per1.age = 23;

    per1.salary = 59423;

    printf("Person1 =>\nAge: %d\nSalary: %.2f", per1.age, per1.salary);

    per2.age = 21;

    per2.salary = 87694.2469;

    printf("\nPerson2 =>\nAge: %d\nSalary: %.2f", per2.age, per2.salary);
}
