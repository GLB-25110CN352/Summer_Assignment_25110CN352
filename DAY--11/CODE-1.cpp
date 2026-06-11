#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter the number: ";
    cin>>a;
    cout<<endl;
    cout<<"enter the number: ";
    cin>>b;
    cout<<"sum is: "<<sum(a,b);
    return 0;
}