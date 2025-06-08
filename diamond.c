#include <stdio.h>

int main() {
    int n;

    // Prompt user for an odd number of rows
    printf("Enter the number (odd) of rows: ");
    scanf("%d", &n);

    // Ensure the input is odd
    if (n % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return 1; // Exit with an error code
    }

    // Print upper half of the diamond
    for (int i = 1; i <= n; i += 2) {
        for (int spaces = 0; spaces < (n - i) / 2; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print lower half of the diamond
    for (int i = n - 2; i > 0; i -= 2) {
        for (int spaces = 0; spaces < (n - i) / 2; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}