#include<iostream>
using namespace std;

class Bank {
public:
    string name;
    int acc_no;
    float balance;
    long long ph_no;
    int pin;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account No: ";
        cin >> acc_no;

        cout << "Enter Balance: ";
        cin >> balance;

        cout << "Enter Phone Number: ";
        cin >> ph_no;

        cout << "Set 4-Digit PIN: ";
        cin >> pin;
    }

    void CreateAccount() {
        cout << "\n--- Account Created ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
        cout << "Phone No: " << ph_no << endl;
    }

    bool verifyPin() {
        int enteredPin;
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
            return true;

        cout << "Wrong PIN!" << endl;
        return false;
    }

    void deposit() {
        if (!verifyPin()) return;

        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Updated Balance: " << balance << endl;
    }

    void withdrawal() {
        if (!verifyPin()) return;

        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful" << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void showbalance() {
        if (!verifyPin()) return;

        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    Bank b;

    b.getData();
    b.CreateAccount();

    b.deposit();
    b.withdrawal();
    b.showbalance();

    return 0;
}
