#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    int sum = 0;
    int count = 0;

    // Ensure that start is odd
    if (start % 2 == 0) {
        start++;
    }

    for (int i = start; i <= end; i += 2) {
        sum += i;
        count++;
    }

    if (count == 0) {
        printf("No odd numbers in the given range.\n");
    } else {
        double average = (double)sum / count;
        printf("Average of odd numbers between %d and %d (inclusive) is %.2lf\n", start, end, average);
    }

    return 0;
}
