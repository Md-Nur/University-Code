#include <stdio.h>

#define NUMBER_OF_PERSONS 3 

struct person
{
    char name[20];
    int age;
    float salary;
};

int maxNumber();

void main()
{
    struct person p[NUMBER_OF_PERSONS];
    int i, ages[NUMBER_OF_PERSONS], maxAge, salaries[NUMBER_OF_PERSONS], maxSalary;
    for (i = 0; i < NUMBER_OF_PERSONS; i++)
    {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", p[i].name);
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &p[i].age);
        printf("Enter the salary of person %d: ", i + 1);
        scanf("%f", &p[i].salary);
    }
    printf("\n\n");
    for (i = 0; i < NUMBER_OF_PERSONS; i++)
    {
        printf("Name of person %d: %s\n", i + 1, p[i].name);
        printf("Age of person %d: %d\n", i + 1, p[i].age);
        printf("Salary of person %d: %f\n", i + 1, p[i].salary);
        
    }

}

