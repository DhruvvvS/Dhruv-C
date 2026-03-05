// Checking prime number using loops

#include <stdio.h>
int main()
{
    int n, prime = 0; // prime equals to zero means setting a condition to check prime
    printf("Enter the no. to be checked:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1; // prime equals to one means the condition for prime is true, here prime is a diabolical function
        }
    }
    if (prime)
    {
        printf("The entered no. is not prime.\n", n);
    }
    else
    {
        printf("The entered no. is prime.\n", n);
    }
    return 0;
}

// Checking prime number without using loops

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    char *res;
    res = num % 2 == 0 ? "Even" : "Odd"; // This is if-else statement in a different way
    // condition ? if : else ;
    printf("%s", res);
    return 0;
}