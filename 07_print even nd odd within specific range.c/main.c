#include <stdio.h>

int main() {
    int start, end, i;

    // Take range input from the user
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    // Print all even numbers in the range
    printf("\nEven numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print all odd numbers in the range
    printf("\nOdd numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
