#include <stdio.h>

// Using Recursion
int fact(int n)
{
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}

// Without Recursion
int factorial(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial using recursion = %d", fact(n));
    printf("\nFactorial without recursion = %d", factorial(n));

    return 0;
}
