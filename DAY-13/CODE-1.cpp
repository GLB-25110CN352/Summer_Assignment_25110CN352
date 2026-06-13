#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << " Elements of arrays are: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}