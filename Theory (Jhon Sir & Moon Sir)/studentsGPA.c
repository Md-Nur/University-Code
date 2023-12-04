#include <stdio.h>
#include <string.h>

const char *lg(int marks)
{
    if (marks >= 80)
    {
        return "A+";
    }
    else if (marks >= 70)
    {
        return "A";
    }
    else if (marks >= 60)
    {
        return "A-";
    }
    else if (marks >= 50)
    {
        return "B";
    }
    else if (marks >= 40)
    {
        return "C";
    }
    else if (marks >= 33)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

float gp(int marks)
{
    if (marks >= 80)
    {
        return 4.00;
    }
    else if (marks >= 70)
    {
        return 3.75;
    }
    else if (marks >= 60)
    {
        return 3.50;
    }
    else if (marks >= 50)
    {
        return 3.25;
    }
    else if (marks >= 40)
    {
        return 3.00;
    }
    else if (marks >= 33)
    {
        return 2.75;
    }
    else
    {
        return 0.00;
    }
}

void main()
{
    int marks[50], n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Marks of %d student: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("Marks\tLG\tGP\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", marks[i], lg(marks[i]), gp(marks[i]));
    }
}