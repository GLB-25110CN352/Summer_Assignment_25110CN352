#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    cout << "Armstrong numbers in the range: " << endl;
    for (int i = start; i <= end; i++) {
        int n = i;
        int n1 = n;
        int c = 0;
        while (n1 != 0) {
            n1 = n1 / 10;
            c++;
        }
        n1 = n;
        int sum = 0;
        while (n1 != 0) {
            int r = n1 % 10;
            sum = sum + round(pow(r, c));
            n1 = n1 / 10;
        }
        if (sum == n) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}