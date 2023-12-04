#include <stdio.h>

int main()
{
    float phy, chem, bio, math, cp, result;
    printf("Enter Physics marks: ");
    scanf("%f", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);
    printf("Enter Biology marks: ");
    scanf("%f", &bio);
    printf("Enter Mathematics marks: ");
    scanf("%f", &math);
    printf("Enter Computer marks: ");
    scanf("%f", &cp);

    if (phy > 100 || phy < 0 || chem > 100 || chem < 0 || bio > 100 || bio < 0 || cp > 100 || cp < 0 || math > 100 || math < 0)
    {
        printf("WRONG ENTRY");
    }
    else
    {
        result = (phy + chem + bio + math + cp) / 500;
        result = result * 100;

        if (result >= 90)
        {
            printf("Grade A");
        }
        else if (result >= 80)
        {
            printf("Grade B");
        }
        else if (result >= 70)
        {
            printf("Grade C");
        }
        else if (result >= 60)
        {
            printf("Grade D");
        }
        else if (result >= 40)
        {
            printf("Grade E");
        }
        else
        {
            printf("Grade F");
        }
    }
    return 0;
}
