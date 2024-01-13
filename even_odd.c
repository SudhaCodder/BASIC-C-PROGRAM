#include<stdio.h>
int main(){
    int i,n;
    printf("enter number=");
    scanf("%dn",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d",-i);
        }else{
            printf("%d",i);
        }
    }
        printf("%d\n",n);
    
    return 0;
}