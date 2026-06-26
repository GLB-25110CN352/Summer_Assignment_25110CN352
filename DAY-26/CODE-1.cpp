#include <iostream>
using namespace std;
int main(){
    int num=23; //num the robot given
    int num1;
    cout <<"enter the first guess number\n";
    cin>>num1;
    while(num1!=num){
    if (num1>num){
        cout<<"shorter\n";
        cin>>num1;
    }
    else if (num1<num){
        cout<<"longer\n";
        cin>>num1;
    }
   
    }
    cout<<"you guess correctly";
    return 0;
}