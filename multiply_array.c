#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number for multiplication table : ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1); // array will directly initialize from here
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d is %d\n", n, i + 1, arr[i]); // i+1 so it starts with 1 and not 0
    }
    return 0;
}