#include<iostream>
using namespace std;
int main(){
    int n,arr[n],n1;
    cout<<"enter the size:";
    cin>>n;
    
    cout<<"enter the element in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the number you want to search: ";
    cin>>n1;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==n1){
            pos= i;
           
            break;
        }
    }
    if(pos!=-1){
        cout<<pos<<" "<<"th eleement";
    }
    else{
        cout<<"element not found ";
    }
    return 0;
}