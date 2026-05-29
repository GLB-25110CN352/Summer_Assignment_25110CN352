#include<stdio.h>
int main(){
    int n,prod,r;
    printf("enter the number:");
    scanf("%d",&n);
    prod=1;
    while(n!=0){
        r=n%10;
        prod=prod*r;
        n=n/10;
    }
    printf("product of digits in a number is %d",prod);
    return 0;
}