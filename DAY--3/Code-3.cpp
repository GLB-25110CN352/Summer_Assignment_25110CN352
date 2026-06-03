#include<iostream>
using namespace std;
int main(){
    int n1,n2,GCD=1,i;
    cout<<"enter the number: ";
    cin>>n1;
    cout<<"enter the number: "; 
    cin>>n2;
    for(i=1;i<=n1&&i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            GCD=i;
        }
    }
    cout<<"GCD is  "<<GCD;
    return 0;
}