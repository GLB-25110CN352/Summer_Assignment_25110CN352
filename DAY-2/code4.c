#include<stdio.h>
int main(){
    int n,rev,r,n1;
    printf("enter the number:");
    scanf("%d",&n);
    rev=0;
    n1=n;
    while(n!=0){
        r=n%10;
        rev=rev*10 + r;
        n=n/10;
    }
    if(rev==n1){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
}