// Fibonacci sequence using functions
// Fibonacci = 0,1,1,2,3,5,8,13,21,34,55,........

#include <stdio.h>
int fibonacci(int); //function prototype
int fibonacci(int n) //function definition
{
    // creating a base case for first two elements
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    printf("Enter the no. for which you need fibonacci value : ");
    scanf("%d", &n);
    printf("The value of fibonacci at %d is %d", n, fibonacci(n)); //function call
    return 0;
}

// Fibonacci sequence using loops

#include <stdio.h>
int main()
{
    int n, c;
    int a=0, b=1; //Initialize a and b as to let code know where to start from 
    printf("Enter the no. for which you need fibonacci value :");
    scanf("%d", &n);
    if (n == 0) //Base case for 0
    {
        printf("The value of fibonacci at %d is %d", n, a);
    }
    else if (n == 1) // Base case for 1
    {
        printf("The value of fibonacci at %d is %d", n, b);
    }
    else
    {
        for (int i = 2; i <= n; i++) //loop starting from 2 
        {
            c = a + b; //sum of previous 2 numbers
            a = b; //assigning previous second to new first
            b = c; //assigning result of previous value as new second
        }
        printf("The value of fibonacci at %d is %d", n, c);
    }
    return 0;
}