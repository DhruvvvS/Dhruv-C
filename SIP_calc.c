#include <stdio.h>
#include <math.h>
int main()
{
    float p, a, b, r, n, k, l, A;
    printf("enter the principal amount \n");
    scanf("%f", &p);
    printf("Enter the rate of return per annum \n");
    scanf("%f", &a);
    printf("Enter the no of years \n");
    scanf("%f", &b);
    r = (a / 100) / 12;
    n = b * 12;
    k = pow(1 + r, n);
    l = (k - 1) / r;
    A = p * l * (1 + r);
    printf("The amount you will receive after SIP maturity is %.2f ", A);
    return 0;
}