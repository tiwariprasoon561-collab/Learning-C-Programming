#include <stdio.h>
#include <stdlib.h> // Required for abs() to handle negative numbers

int main() {
    int num, first_digit, last_digit;

    // Ask user for input
    printf("Enter any number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Convert to absolute value to handle negative numbers properly
    int temp = abs(num);

    // Find the last digit using the modulo operator
    last_digit = temp % 10;

    // Find the first digit by dividing until the number is less than 10
    while (temp >= 10) {
        temp = temp / 10;
    }
    first_digit = temp;

    // Display the results
    printf("Original number: %d\n", num);
    printf("First digit :     %d\n", first_digit);
    printf("Last digit  :      %d\n", last_digit);

    return 0;
}
