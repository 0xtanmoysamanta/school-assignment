#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Number is prime
}

// Function to display prime numbers between two intervals
void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input the range
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &start, &end);

    // Display prime numbers in the given range
    displayPrimes(start, end);

    return 0;
}
