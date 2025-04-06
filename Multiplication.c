//Create a proper multiplication table
#include<stdio.h>
int main()
{
    int n,i=1;//We will initialise i here for while loop
    printf("enter the no.:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d X %d = %d\n",n,i,n*i);//we are doing this with address otherwise we will need another variable for defining multiplication
        i++;
    }
    return 0;
}


//Create a reverse multiplication table 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no.:");
    scanf("%d",&n);
   for(int i=10;i;i--){
    printf("%d X %d = %d\n",n,i,n*i);
   }
    return 0;
}