/* Star Plus
     *
     *
 * * * * *
     *
     *
 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // loop for rows
    {
        for (int j = 1; j <= n; j++) // loop for column, less than n as it will form a square shape
        {
            if (i == (n + 1) / 2 || j == (n + 1) / 2) // for middle row and column
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


/* Hollow rectangle
   * * * * * *
   *         *
   *         *
   * * * * * *
*/
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    printf("Enter the no. of columns");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

/* Star Cross
   *   *
    * *
     *
    * *
   *   *
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1) // if n==5 i+j at every condition will be 6
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/* Alternate Binary OR 0 & 1 Triangle
   1
   01
   101
   0101
*/
#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

/* Inverted Star using 2 loops in row loop
       *
      **
     ***
    ****
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*   1
    123
   12345
  1234567
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <=  2*i-1 ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*    1
     121
    12321
  123454321
  */
 #include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= i - 1; k++) // Create a int loop to store data
        {
            printf("%d", a);
            a--;
        }

        printf("\n");
    }
    return 0;
}

/* Alphabet Pyramid
        A
       ABA
      ABCBA
     ABCDCBA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int l = i + 63; // plus 63 as we need to decrease every i value by one
        char d = (char)l; // Typecasting d here to use it ahead 
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            int a = j + 64; // Adding 64 for starting left side of pyramid 
            char ch = (char)a; // Typecasting
            printf("%c ", ch);
        }
        for (int k = 1; k <= i - 1; k++) // Create a int loop to store data
        {
            printf("%c ",d);
            d--;
        }

        printf("\n");
    }
    return 0;
}