#include <iostream>
using namespace std;

int main() {
    int n, n1;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> n1;
    int low = 0, high = n - 1;
    bool found = false;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == n1) {
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        }
        else if(arr[mid] < n1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(!found)
        cout << "Element not found";
    return 0;
}