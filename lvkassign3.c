#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n----- ARITHMETIC OPERATIONS -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Addition = %.2f", a + b);
                break;

            case 2:
                printf("Subtraction = %.2f", a - b);
                break;

            case 3:
                printf("Multiplication = %.2f", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Division = %.2f", a / b);
                else
                    printf("Division by zero is not possible.");
                break;

            case 5:
                printf("Exiting the program...");
                break;

            default:
                printf("Invalid choice! Please try again.");
        }

    } while(choice != 5);

    return 0;
}

