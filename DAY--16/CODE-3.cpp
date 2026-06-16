#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter Sum: ";
    cin >> sum;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << arr[i] << " + " << arr[j]
                     << " = " << sum;
            }
        }
    }

    return 0;
}