#include <stdio.h>

void displayFibonacci(int terms) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < terms; i++) {
        printf("%d ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
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
