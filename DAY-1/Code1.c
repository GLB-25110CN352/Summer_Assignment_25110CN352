#include <stdio.h>
int main(){
    int n,i,sum;
    printf("enter the number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum = sum + i; 
    }
    printf("%d",sum);
    return 0;
}