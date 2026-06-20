#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter the rows and columns: ";
    cin >> r >> c;
    int a[10][10];
    cout << "Enter the matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++)
            sum += a[i][j];
        cout << "Sum the of Row " << i + 1 << " = " << sum << endl;
    }
    return 0;
}