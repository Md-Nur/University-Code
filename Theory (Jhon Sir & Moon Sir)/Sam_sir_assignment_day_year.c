#include <stdio.h>

int main()
{
    int days, years, months, remaining_days;
    // Days in each month
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap_year = 0;

    // Prompt the user for input
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years
    years = days / 365;
    // Calculate the remaining days after calculating years
    remaining_days = days % 365;

    // Check for leap years and adjust February's days accordingly
    for (int i = 0; i <= years; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            if (remaining_days >= 366)
            {
                remaining_days -= 366;
                leap_year++;
            }
        }
        else
        {
            if (remaining_days >= 365)
            {
                remaining_days -= 365;
            }
        }
    }

    // Calculate months
    months = 0;
    for (int i = 0; i < 12; i++)
    {
        if (remaining_days >= days_in_month[i])
        {
            remaining_days -= days_in_month[i];
            months++;
        }
        else
        {
            break;
        }
    }

    // Display the result
    printf("Years: %d\n", years - leap_year);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remaining_days);

    return 0;
}
