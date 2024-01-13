#include <stdio.h>
// to calculate factorial of given number
int main()
{
    int n;
    
    int i;
    int fact = 1;
    printf("Enter number=");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
    return 0;
}






