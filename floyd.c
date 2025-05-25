// // Floyd triangle for numbers
#include <stdio.h>
int main()
{
    int k = 1, n; // initialise k because otherwise code will not run due to not knowing from where to start k from.
    printf("Enter the no. of rows:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // using nested loop as i for rows and j for columns.
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", k++);
        }
        printf("\n"); // for next line
    }
    return 0;
}

// Floyd triangle for alphabets
#include <stdio.h>
int main()
{
    char ch = 'A'; // define character in here only
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
            if (ch > 'Z') // condition for more than 26 no. of rows
            {
                ch = 'A'; // after Z to repeat A again
            }
        }
        printf("\n");
    }
    return 0;
}

// Floyd triangle using functions
#include <stdio.h>
int i, j, n; // initialize all the variables before
void function1();
void function2(int); // int to pass the value of loop iteration in function
void function1()
{
    for (i = 1; i <= n; i++)
    {
        function2(i); // passing the iteration of loop in function
        printf("\n");
    }
}
void function2(int i)
{
    for (j = 1; j <= i; j++)
    {
        printf("*");
    }
}
int main()
{
    printf("Enter the no of rows");
    scanf("%d", &n);
    function1(); // calling the function 1 which will also call the function 2
    return 0;
}