#include <stdio.h>
int main()
{
    int p, t, x, y;
    printf("Enter your income : "); // Taking input of income
    scanf("%d", &p);
    switch (p) // creating switch case for p as principal amount
    {
    case 0 ... 10000: // Making range in switch case by using three dots(...)
        printf("No income tax\n");
        t=0; // t defines the Tax amount 
        break;

    case 10001 ... 20000:
        x = p - 10000; // x is for making new principal amount for each new case 
        t = (0.1 * x);
        break;

    case 20001 ... 30000:
        x = (p - 20000);
        t = (0.15 * x) + 1000;
        break;

    case 30001 ... 40000:
        x = (p - 30000);
        t = (0.2 * x) + 1500 + 1000;
        break;

    case 40001 ... 50000:
        x = (p - 40000);
        t = (0.25 * x) + 2000 + 1500 + 1000;
        break;

    default:
        y = (p - 50000);
        t = (0.3 * y) + 1000 + 1500 + 2000 + 2500;
        break;
    }
    printf("The income tax to pay is %d\n", t); // output of tax to be paid
    printf("Total amount received after tax is %d\n", p-t); // output of total amount received after tax deduction 
    return 0;
}