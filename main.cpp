#include <iostream>
using namespace std;

// Declare the functions
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    cout << "Welcome to your bank balance\n";
    cout << "Do you want to continue to options (yes) or quit?\n\n";

    string startProgram;
    cin >> startProgram;

    while (startProgram == "yes") {

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

            // Show balance
            case 1:
                showBalance(balance);
                break;

                // Deposit
            case 2:
                balance += deposit();
                cout << "Your new Balance is:\n" << balance << "\n";
                break;

                // Withdraw
            case 3:
                balance = withdraw(balance);
                cout << "Your new Balance is:\n" << balance << "\n";
                break;

                // Exit
            case 4:
                cout << "Goodbye\n";
                startProgram = "exit";
                break;

                // Get user to select one of the given options
            default:
                cout << "Please Select 1-4!";

        }
    }
}

// Function to show the balance
void showBalance(double amount) {

    // Display balance
    cout << amount << "\n\n";
}

// Function to deposit money
double deposit() {

    // Initialise user choice
    double deposit = 0;

    cout << "Enter the amount to be deposited: \n";

    // Get the user input
    cin >> deposit;
    return deposit;
}

// Function to withdraw money
double withdraw(double balance) {

    // Initialise user choice
    double withdraw = 0;

    cout << "Enter the amount to be withdrawn: \n";

    // Get the user input
    cin >> withdraw;


    // Check to see if user balance has sufficient funds
    if (withdraw > balance) {

        cout << "Insufficient funds";
        return balance;
    }

    return balance - withdraw;
}