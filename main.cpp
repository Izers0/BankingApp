#include <iostream>
using namespace std;

// Declare the functions
double showBalance(double balance);
void deposit();
void withdraw(double balance);

int main() {

    // Initialise the users balance
    double balance = 0;

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
            cout << "You have a balance of : £";
            showBalance(balance);
            break;

        case 2:
            cout << "You want to deposit Money\n";
            deposit();
            break;

        case 3:
            cout << "You want to withdraw Money\n";
            withdraw(balance);
            break;

        case 4:
            cout << "Goodbye?";

        default:
            cout << "Please Select 1-4!";

    }

}

// Function to show the balance
double showBalance(double amount) {

    cout << "You have a total of : \n  £";
    return amount;
}

// Function to deposit money
void deposit() {

    double deposit = 0;

    cout << "Enter the amount to be deposited: \n";
    cin >> deposit;
}

// Function to withdraw money
void withdraw(double balance) {

    double withdraw = 0;

    cout << "Enter the amount to be withdrawn: \n";
    cin >> withdraw;
}