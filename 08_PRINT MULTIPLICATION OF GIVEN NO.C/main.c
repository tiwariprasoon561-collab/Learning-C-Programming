#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    
    // Loop to multiply the number from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
