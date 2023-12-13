#include <stdio.h>

struct student 
{
    char name[50];
    int courseNumber;
    float CGPA;
};

void main(){
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the course number of student %d: ", i + 1);
        scanf("%d", &s[i].courseNumber);
        printf("Enter the CGPA of student %d: ", i + 1);
        scanf("%f", &s[i].CGPA);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Name of student %d: %s\n", j + 1, s[j].name);
        printf("Course number of student %d: %d\n", j + 1, s[j].courseNumber);
        printf("CGPA of student %d: %.2f\n", j + 1, s[j].CGPA);
    }
}
