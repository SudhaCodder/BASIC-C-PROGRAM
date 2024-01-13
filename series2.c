#include <stdio.h>
#include <math.h>
// follow this series 1/1 ,2/4, 3/27,...n/n^n
int main()
{
    int r;
    int n;
    int i = 1;
    printf("enter numer=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        
        r = pow(i, i);
        printf("%d / %d\n",i,r);
       
    }
    
    return 0;
}