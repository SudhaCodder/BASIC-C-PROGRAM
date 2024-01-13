#include <stdio.h>
struct personal
{
    char name[50];
    int age;
    float height;
};
int main()
{

    struct personal person;

    printf("enter name=");
    scanf("%s", person.name);

    printf("enter age=");
    scanf("%d", &person.age);

    printf("enter height=");
    scanf("%f", &person.height);

    printf("Your information");
    printf(" your name=%s\n", person.name);
    printf(" age=%d\n", person.age);
    printf(" Height=%0.2f\n", person.height);

    return 0;
}
