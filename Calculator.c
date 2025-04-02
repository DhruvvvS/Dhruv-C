//Create a calculator//
#include<stdio.h>
int main()

{
    int a,b,c;
    char op;
    printf("Enter the values of a,b\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation:\n");
    scanf(" %c",&op);

    switch(op)
    {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
    }
    printf("The Result is:%d",c);

return 0;
}