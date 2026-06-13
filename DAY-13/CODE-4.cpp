#include <iostream>
using namespace std;

int main() {
    int n, c1 = 0, c2 = 0;

    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            c1++;
        else
            c2++;
    }

    cout << "Even elements = " << c1 << endl;
    cout << "Odd elements = " << c2;

    return 0;
}