#include <iostream>
using namespace std;
int main() {
    int num, remainder, reversedNum = 0;
    
    cout<<"Enter an integer: ";
    cin>>num;
    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
    
    cout<<"Reversed number =  "<< reversedNum;
    return 0;
}