#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char name[50];
};

void main()
{

    struct student man[5];
    int position_of_max_age = 0, max_age;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of person %d: ", i + 1);
        gets(man[i].name);
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &man[i].age);
    }
// 5 66 8 99 2
    // find the max age
    max_age = man[0].age;

    for (int i = 0; i < 5; i++)
    {
        if (man[i].age > max_age)
        {
            position_of_max_age = i;
            max_age = man[i].age;
        }
    }

    // print the max age person
    printf("Max age person is %s", man[position_of_max_age].name);
}

// #include <stdio.h>
// #include <string.h>

// void main(){
//     char name[50] = "Jhon Doe";
//     // scanf("%s", &name);
//     gets(name);
//     printf("Using printf function: %s\n", name);
//     // puts(name);
// }