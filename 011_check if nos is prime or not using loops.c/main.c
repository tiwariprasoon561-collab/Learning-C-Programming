#include <stdio.h>

int main() {
    int n, isPrime = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Loop from 2 up to the square root of n (i * i <= n)
        for (int i = 2; i * i <= n; i++) {
            // If n is divisible by i, it is not prime
            if (n % i == 0) {
                isPrime = 0; 
                break; // Exit loop early since a factor is found
            }
        }
    }

    // Print the result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
