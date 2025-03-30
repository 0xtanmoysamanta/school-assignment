#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms are 0 and 1
        } else {
            next = first + second; // Next term is the sum of the previous two
            first = second; // Update first
            second = next; // Update second
        }
        printf("%llu ", next); // Print the next term
    }
    printf("\n");

    return 0;
}
