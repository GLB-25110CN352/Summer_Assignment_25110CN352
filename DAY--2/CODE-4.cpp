#include<iostream>
using namespace std;
int main(){
    int n,rev,r,n1;
    cout<<"enter the number: ";
    cin>>n;
    rev=0;
    n1=n;
    while(n!=0){
        r=n%10;
        rev=rev*10 + r;
        n=n/10;
    }
    if(rev==n1){
        cout<<"palindrome number";
    }
    else{
        cout<<"not a palindrome number";
    }
    return 0;
}