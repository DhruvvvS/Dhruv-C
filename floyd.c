// // Floyd triangle for numbers
#include<stdio.h>
int main()
{
    int k=1,n; //initialise k because otherwise code will not run due to not knowing from where to start k from.
    printf("Enter the no. of rows:\n");
    scanf("%d",&n);
    for (int i=1 ;i<=n ;i++)//using nested loop as i for rows and j for columns.
    {
        for (int j=1 ;j<=i ;j++)
        {
            printf("%d",k++);
        }
        printf("\n");//for next line
    }
    return 0;
}




// Floyd triangle for alphabets
#include<stdio.h>
int main()
{
    char ch = 'A';//define character in here only
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for (int i=1 ;i<=n ;i++ )
    {
        for (int j=1 ;j<=i ;j++ )
        {
            printf("%c ", ch);
            ch++;
            if(ch > 'Z')//condition for more than 26 no. of rows
            {
                ch = 'A';//after Z to repeat A again
            }
        }
        printf("\n");
    }
    return 0;
}