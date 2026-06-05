#include<iostream>
using namespace std;
int main(){
    int n1,n,fact,r,sum;
    cout<<"enter the number: ";
    cin>>n;
    sum=0;
    n1=n;
    while(n1!=0){
        r=n1%10;
        fact=1;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n1=n1/10;
    }
    if(n==sum){
        cout<<"strong number";
    }
    else{
        cout<<"not a strong number";
    }
    return 0;
}