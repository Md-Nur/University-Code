// A program that uses a structure to store the name, age and salary of 5 people. And then find the person with the highest salary and the oldest person.
#include <stdio.h>
#define NUMBER_OF_PERSON 5

struct person // structure to store information of a person
{
    char name[50];
    int age, salary;
};

int maxSalary(struct person persons[]);
int maxAge(struct person persons[]);

void main()
{
    struct person persons[NUMBER_OF_PERSON];

    // collect information of 5 people
    for (int i = 0; i < NUMBER_OF_PERSON; i++)
    {
        printf("Enter name of person %d: ", i + 1);
        scanf("%s", persons[i].name);
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &persons[i].age);
        printf("Enter salary of person %d: ", i + 1);
        scanf("%d", &persons[i].salary);
        printf("\n");
    }

    printf("Person with max salary: %s. Salary: %d\n", persons[maxSalary(persons)].name, persons[maxSalary(persons)].salary);
    printf("Person with max age: %s. Age: %d\n", persons[maxAge(persons)].name, persons[maxAge(persons)].age);
}

int maxSalary(struct person persons[])
{
    int index = 0; // index of person with max salary
    for (int i = 1; i < NUMBER_OF_PERSON; i++)
    {
        if (persons[i].salary > persons[index].salary)
        {
            index = i;
        }
    }
    return index;
}

int maxAge(struct person persons[])
{
    int index = 0; // index of person with max age
    for (int i = 1; i < NUMBER_OF_PERSON; i++)
    {
        if (persons[i].age > persons[index].age)
        {
            index = i;
        }
    }
    return index;
}
