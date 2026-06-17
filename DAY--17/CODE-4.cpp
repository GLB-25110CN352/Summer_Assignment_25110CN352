#include <iostream>
using namespace std;
int main() {
     int a[50], b[50], c[100];
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    cout << "Enter the  elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the size of second array: ";
    cin >> m;
    cout << "Enter the elements: ";
    for(int i = 0; i < m; i++)
        cin >> b[i];
    cout << "Common Elements will be: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}