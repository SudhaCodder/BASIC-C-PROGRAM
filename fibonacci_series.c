// // // // #include <stdio.h>
// // // // // to print fibonacci series

// // // // // The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, typically starting with 0 and 1. So, it goes like this:

// // // // // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.

// // // // int main()
// // // // {
// // // //     int n, t1 = 0, t2 = 1;
// // // //     int next_term;
// // // //     int i;
// // // //     printf("enter nummber=");
// // // //     scanf("%d", &n);
// // // //     printf("%d\n", t1);
// // // //     printf("%d\n", t2);
// // // //     for (i = 3; i <= n; i++)
// // // //     {
// // // //         next_term = t1 + t2;
// // // //         printf("%d\n", next_term);
// // // //         t1 = t2;
// // // //         t2 = next_term;
// // // //     }
// // // //     return 0;
// // // // }

// // #include<stdio.h>
// // int main(){
// // int n , t1=0 , t2=1;
// // int next_term;
// // printf("enter number:");
// // scanf("%d",&n);
// // printf("%d\n",t1);
// // printf("%d\n",t2);
// // for(int i=3;i<=n;i++){
// //     next_term=t1+t2;
// //     printf("%d\n",next_term);
// //     t1=t2;
// //     t2=next_term;
// // }
// // return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n1=0,n2=1,n;
// //     int temp;
// //     printf("enter the number:");
// //     scanf("%d",&n);
// //     printf("%d\n",n1);
// //     for(int i=2;i<=n;i++){
// //         temp=n2+n1;
// //         n2=n1;
// //         n1=temp;
// //         printf("%d\n",temp);
// //     }
// //     return 0;
// // }

#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, next_term;
    printf("Enter the term of fibonacci series:");
    scanf("%d", &n);
    printf("%d\t", t1);
    printf("%d\t", t2);

    for (int i = 3; i <= n; i++)
    {

        next_term = t1 + t2;
        printf("%d\t", next_term);
        t1 = t2;
        t2 = next_term;
    }
    return 0;
}

