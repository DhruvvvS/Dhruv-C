// This code will get us the average of max and min of numbers which are taken from three numbers from user //

#include<stdio.h>
int main()
{
    //Taking input from user as we need three numbers//
    int a,b,c;
    float d;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
// This will determine max and min no. from three numbers //
    if(a>b && a>c){
            if(b>c){
                d=(a+c)/2.0;
            }
            else {
                d=(a+b)/2.0;
            }
    }
    else if(b>a && b>c){
            if(a>c){
                d=(b+c)/2.0;
            }
            else {
                d=(b+a)/2.0;
            }
    }
    else if(c>a && c>b){
            if(a>b){
                d=(c+b)/2.0;
            }
            else {
                d=(c+a)/2.0;
            }
    }
    else {
        printf("No Result as No Number is larger\n");
        return 0;
    }
    // .2f will give us answer till two exact no.//
    printf("The result is:%.2f",d);

return 0;
}