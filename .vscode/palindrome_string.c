// #include<stdio.h>
// #include<string.h>

// int main(){
//     char ch[100];
//     printf("Enter the character : ");
//     gets(ch) ;
//     int flag = 1;
//     int start = 0;
//     int end = strlen(ch) - 1;
//     while(start<end){
//      if(ch[start]!=ch[end]){
//           flag = 0;
//           break;
//      }
//      start++;
//      end--;
//     }
//     if(flag==1){
//      printf("palindrome");
//     }else{
//      printf("not palindrome");
//     }

// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//      char ch[100];
//      printf("enter the character:");
//      gets(ch);
//      int flag=1;
//      int start =0;
//      int end = strlen(ch)-1;
//      while(start<end){
//           if(ch[start]!=ch[end]){
//                flag =0;
//                break;

//           }
//           start++;
//           end--;
//      }
//      if(flag==1){
//           printf("palindrome");
//      }else{
//           printf("not palindrome");

//      }

// }

#include<stdio.h>
#include<string.h>
int main(){
     char ch[100];
     printf("enter character:");
     gets(ch);
     int flag=1;
     int start=0;
     int end=strlen(ch)-1;
     while(start<end){
          if(ch[start]!=ch[end]){
               flag=0;
               break;
          }
          start++;
          end--;
     }
     if(flag==1){
          printf("palindrome");

     }else{
          printf("not palindrome");
     }
}




