// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter any year:");
//     scanf("%d", &year);
//     if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//     {
//         printf("Leap year");
//     }
//     else
//     {
//         printf("Not leap year");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int arr[] = {51,32,43,24,5,26};
// int i;
// for(i=0; i<=5; i++) {
// printf("\n%d %d %d %d",arr[i],*(i+arr),*(arr+i),i[arr]);
// }
// getch();
// }
 
#include<stdio.h>
int main() {
int arr[20], i, j, k, size;
printf("\nEnter array size: ");
scanf("%d", &size);
printf("\nAccept Numbers: ");
for (i = 0; i < size; i++)
scanf("%d", &arr[i]);
printf("\nArray with Unique list: ");
for (i = 0; i < size; i++) {
for (j = i + 1; j < size;) {
if (arr[j] == arr[i]) {
for (k = j; k < size; k++) {
arr[k] = arr[k + 1]; }
size--; } 
else
j++; }
}
for (i = 0; i < size; i++) {
printf("%d ", arr[i]); }
return (0);
}
