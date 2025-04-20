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