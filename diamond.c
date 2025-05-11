#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number(odd) of rows: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i+=2){
        for (int spaces = 0; spaces < (n-i)/2; spaces++){
            printf(" ");
        }
        for (int j=1; j<=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
     for (int i=n-2; i>0 ; i-=2){
         for (int spaces = 0; spaces < (n-i)/2; spaces++){
             printf(" ");
        }
         for (int j=1; j<=i; j++){
             printf("*");
         }
     printf("\n");
         }
    return 0;
}