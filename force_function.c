#include <stdio.h>
float force(int m); // function prototype
float force(int m)  // function definition
{

    return m * 9.8;
}
int main()
{
    int m;
    printf("Enter the mass(in kg) for force : ");
    scanf("%d", &m);
    printf("The force exerted by mass %dkg is %.2f Newton",m,force(m)); // function call
    return 0;
}
