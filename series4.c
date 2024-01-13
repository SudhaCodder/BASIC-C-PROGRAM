#include <stdio.h>

int main() {
    // Initialize the first term of the series
    int term = 5;

    // Print the first ten terms of the series
    for (int i = 1; i <= 10; i++) {
        printf("%d ", term);

        // Calculate the next term in the series
        term += 7;
    }

    return 0;
}
