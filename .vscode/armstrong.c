#include<stdio.h>
#include<math.h>

int main(){
    int n, ctr=0, sum=0 , r;
    printf("enter number:");
    scanf("%d",&n);
    int temp=n;
    int n1 = n;
    while(n>0){
        ctr++;
        n=n/10;
    }

    while(temp>0){
        r= temp%10;
        sum=sum+pow(r, ctr);
        temp=temp/10;

    }
    if (n1==sum){
        printf("armstron number");
    }else{
        printf("not armstrong number");
    }
    return 0;

}

/*
#include<stdio.h>
#include<math.h>
int main(){
int n, ctr=0, sum=0, r;
printf("enter number:");
scanf("%d", &n);

int temp=n;
int n1=n;
while(n>0){
    ctr++;
    n=n/10;
}
while(temp>0){
    r=  temp%10;
    sum= sum+pow(r, ctr);
    temp=temp/10;
}
if(n1==sum){
    printf("armstrong number:");

    }else{
        printf("not armstron number:");
    }

    return 0;
}
*/

