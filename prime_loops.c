#include<stdio.h>
int main()
{
    int n,prime=0;
    printf("Enter the no. to be checked:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
        }
    }
    if(prime){
        printf("The entered no. is not prime.\n",n);
    }
    else{
        printf("The entered no. is prime.\n",n);
    }
return 0;
}