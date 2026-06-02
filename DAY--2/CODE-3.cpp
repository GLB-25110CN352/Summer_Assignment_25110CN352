#include<iostream>
using namespace std;
int main(){
    int n,prod,r;
    cout<<"enter the number:";
    cin>>n;
    prod=1;
    while(n!=0){
        r=n%10;
        prod=prod*r;
        n=n/10;
    }
    cout<<"product of digits in a number is  "<<prod;
    return 0;
}