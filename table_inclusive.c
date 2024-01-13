#include <stdio.h>

int main() {
    int m, n;
    
    // Input the values of m and n
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Ensure that m is less than or equal to n
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    // Print tables for numbers from m to n
    for (int i = m; i <= n; i++) {
        printf("Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
