#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
       return a ;
    }
    else if(b>a){
        return b;
    }
    else{
        return a,b;
    }
    
}
int main(){
    int a,b;
    cout<<"enter the number: ";
    cin>>a;
    cout<<endl;
    cout<<"enter the number: ";
    cin>>b;
    cout<<"max is"  << max(a,b);
    return 0;
}