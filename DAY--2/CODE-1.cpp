#include<iostream>
using namespace std;
int main(){
    int n,sum,r;
    cout<<"enter the number:";
    cin>>n;
    sum=0;
    while(n!=0){
        r=n%10;
        sum=sum + r;
        n=n/10;
    }
    cout<<"sum of digit is "<<sum;
    return 0;
}