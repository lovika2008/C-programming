#include <stdio.h>

int main()
{
    int year, month, days, i, j;
    int day = 0;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    // Calculate starting day of the year
    int y = year - 1;
    day = (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;

    // Print calendar month by month
    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < day; i++)
        {
            printf("    ");
        }

        days = monthDays[month];

        for (j = 1; j <= days; j++)
        {
            printf("%4d", j);

            if ((j + day) % 7 == 0)
                printf("\n");
        }

        day = (day + days) % 7;
    }

    return 0;
}

