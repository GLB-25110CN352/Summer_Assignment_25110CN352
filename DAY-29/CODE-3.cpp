#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str1, str2;
    int choice;
    do {
        cout << "\n===== String Operations =====\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. String Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Compare Two Strings\n";
        cout << "6. Concatenate Strings\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            cout << "Enter String: ";
            getline(cin, str1);
            break;
        case 2:
            cout << "String = " << str1 << endl;
            break;
        case 3:
            cout << "Length = " << str1.length() << endl;
            break;
        case 4:
            {
                string rev = str1;
                reverse(rev.begin(), rev.end());
                cout << "Reverse = " << rev << endl;
            }
            break;
        case 5:
            cout << "Enter second string: ";
            getline(cin, str2);
            if (str1 == str2)
                cout << "Strings are Equal\n";
            else
                cout << "Strings are Not Equal\n";
            break;
        case 6:
            cout << "Enter second string: ";
            getline(cin, str2);
            cout << "Concatenated String = " << str1 + str2 << endl;
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