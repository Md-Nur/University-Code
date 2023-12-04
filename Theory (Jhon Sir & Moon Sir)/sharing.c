#include <stdio.h>

struct person
{
    int age, salary;
    char name[50];
};

int maxSalary(struct person person[])
{
    int max = person[0].salary;
    for (int i = 1; i < 5; i++)
    {
        if (person[i].salary >= max)
        {
            max = person[i].salary;
        }
    }
    return max;
}

int maxAge(struct person person[])
{
    int max = person[0].age;
    for (int i = 1; i <= 5; i++)
    {
        if (person[i].age > max)
        {
            max = person[i].age;
        }
    }
    return max;
}

int main()
{
    struct person person[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", person[i].name);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
        printf("Enter salary: ");
        scanf("%d", &person[i].salary);
    }

    printf("Max salary: %d\n", maxSalary(person));
    printf("Max age: %d\n", maxAge(person));

    return 0;
}