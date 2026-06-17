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
    cout << "the Union will be: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    for(int i = 0; i < m; i++) {
        bool found = false;
        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found)
            cout << b[i] << " ";
    }
    return 0;
}