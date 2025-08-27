#include <iostream>
using namespace std;

// Declare the functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    // Initialise the users balance
    double balance = 100;

    // Initialise the users choice of show balance, deposit money or withdraw money
    int choice = 0;

    // Ask the user with a list of options what they want to do
    cout << "What do You want to do: \n\n";

    cout << "1. Display your Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n\n";

    // Get the users choice
    cin >> choice;

    // Switch statement to take the users choice and perform the correct function
    switch (choice) {

        case 1:
            showBalance(balance);
            break;

        case 2:
            balance += deposit();
            cout << "Your new Balance is:\n" << balance << "\n";
            break;

        case 3:
            balance = withdraw(balance);
            cout << "Your new Balance is:\n" << balance << "\n";
            break;

        case 4:
            cout << "Goodbye";

        default:
            cout << "Please Select 1-4!";

    }
}

// Function to show the balance
void showBalance(double amount) {

    cout << amount << "\n\n";
}

// Function to deposit money
double deposit() {

    double deposit = 0;

    cout << "Enter the amount to be deposited: \n";
    cin >> deposit;
    return deposit;
}

// Function to withdraw money
double withdraw(double balance) {

    double withdraw = 0;

    cout << "Enter the amount to be withdrawn: \n";
    cin >> withdraw;


    if (withdraw > balance) {

        cout << "Insufficient funds";
        return balance;
    }

    return balance - withdraw;
}