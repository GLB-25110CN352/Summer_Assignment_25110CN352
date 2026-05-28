#include<stdio.h>
int main(){
    int n,fact,i;
    printf("enter the number:");
    scanf("%d",&n);
    fact=1;
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("the factorial of %d = %d",n ,fact);
    return 0;
}