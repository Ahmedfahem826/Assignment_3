#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void displayFibonacci(int terms) {
    printf("Fibonacci Sequence: ");

    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    displayFibonacci(terms);

    return 0;
}
