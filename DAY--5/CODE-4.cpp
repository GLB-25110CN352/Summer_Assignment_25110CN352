#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int f=1;
    cout<<n<<" has a largest prime factor:";
    for (int i = 2; i <= n; i++) {
        while(n % i == 0) {
            f=i;
            n/=i;
        }
    }
    cout<<f;
    return 0;
}