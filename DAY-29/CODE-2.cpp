#include <iostream>
using namespace std;
int main() {
    int arr[100], n = 0, choice, key;
    do {
        cout << "\n===== Array Operations =====\n";
        cout << "1. Insert Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Maximum Element\n";
        cout << "4. Minimum Element\n";
        cout << "5. Search Element\n";
        cout << "6. Sum of Elements\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            break;
        case 2:
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        case 3:
            if (n == 0) {
                cout << "Array Empty!\n";
                break;
            }
            {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Maximum = " << max << endl;
            }
            break;
        case 4:
            if (n == 0) {
                cout << "Array Empty!\n";
                break;
            }
            {
                int min = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];
                cout << "Minimum = " << min << endl;
            }
            break;

        case 5:
            cout << "Enter element to search: ";
            cin >> key;
            {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Element not found.\n";
            }
            break;
        case 6:
            {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
            }
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 7);
    return 0;
}