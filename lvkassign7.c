#include <stdio.h>
int main()
{
    struct student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Roll No and Name: ");
        scanf("%d %s", &s[i].roll, s[i].name);

        printf("Enter 3 subject marks: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].per = s[i].total / 3.0;
    }

    printf("\n--- STUDENT RESULTS ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %d", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].per);

        if(s[i].per >= 35)
            printf("\nResult: PASS\n");
        else
            printf("\nResult: FAIL\n");
    }

    return 0;
}
