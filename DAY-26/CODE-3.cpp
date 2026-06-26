#include <iostream>
using namespace std;
int main() {
    int pin = 1234, enteredPin;
    int choice;
    double balance = 10000.0, amount;
    cout << "  *** WELCOME TO ATM SYSTEM***\n";
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;
    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access Denied." << endl;
        return 0;
    }
    do {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Rs. " << amount << " deposited successfully.\n";
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else if (amount > balance) {
                    cout << "Insufficient Balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;
            case 4:
                cout << "Thank you for using our ATM!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}