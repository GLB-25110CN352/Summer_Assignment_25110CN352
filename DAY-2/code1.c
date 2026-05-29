#include<stdio.h>
int main(){
    int n,sum,r;
    printf("enter the number:");
    scanf("%d",&n);
    sum=0;
    while(n!=0){
        r=n%10;
        sum=sum + r;
        n=n/10;
    }
    printf("sum of digit is %d",sum);
    return 0;
}