#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"yours array:"<<" ";
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"rotate array from left:  ";
    int temp=arr[n-1];
   for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 