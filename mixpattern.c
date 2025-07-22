/*   Print below pattern
    1
    AB
    123
    ABCD
    12345
*/
#include <stdio.h>
int main()
{
    int n,d;
    printf("enter the no.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // Only 1 i loop as rows are increasing and condition is on columns
    {
        if (i % 2 == 0) // If row is even then print alphabets
        {
            for (int k = 1; k <= i; k++)
            {
                d = k + 64; // 64 as 65 is ascii value of alphabet 'A'
                char ch = (char)d; // Typecasting
                    printf("%c", ch);
            }
        }
        else
        {
            for (int j = 1; j <= i; j++) // If row is odd print numbers
            {
                printf("%d", j);
            }
        }
        printf("\n"); // next line
    }

    return 0;
}