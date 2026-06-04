#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, n1, c, r, sum;
    cout << "Enter the number: ";
    cin >> n;
    n1 = n;
    c = 0;
    while (n1 != 0) {
        n1 = n1 / 10;
        c++;
    }
    n1 = n; 
    sum = 0;
    while (n1 != 0) {
        r = n1 % 10;
        sum = sum + round(pow(r, c)); 
        n1 = n1 / 10;                 
    }
    if (sum == n) {
        cout << "armstrong number";
    } else {
        cout << "not an armstrong number";
    }
    return 0;
}