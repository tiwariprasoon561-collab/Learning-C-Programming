#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Get the last digit
    last = num % 10;

    // Make a copy to preserve the original number if needed
    first = num; 

    // Remove digits from right to left until only one remains
    while (first >= 10) {
        first = first / 10;
    }

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}
