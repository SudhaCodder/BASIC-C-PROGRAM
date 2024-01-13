#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    char mobile[20];

    printf("Enter your name:\n");
    fflush;
    gets(name);
    printf("enter your mobile number:\n");
    scanf("%s", mobile);

    printf("your name is:%s\n", name);
    printf("your mobile number is: %s\n", mobile);

    return 0;
}