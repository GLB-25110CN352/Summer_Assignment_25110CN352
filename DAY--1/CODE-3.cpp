#include<iostream>
using namespace std;
int main(){
    int n,i,fact;
    cout<<"enter the number :";
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++){
     fact=fact*i;
     }
    cout<<fact;
    return 0;
}