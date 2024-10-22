#include <iostream>
#include <string>
using namespace std;

class BankCustomer {
private:
    string name;
    int accountNumber;
    double accountBalance;
    bool isActive;

public:
    // Constructor
    BankCustomer(const std::string& customerName, int accNumber, double initialBalance)
        : name(customerName), accountNumber(accNumber), accountBalance(initialBalance), isActive(true) {}

    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposit successful. New balance: " << accountBalance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Withdraw method
    void withdraw(double amount) {
        if (isActive && amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawal successful. New balance: " << accountBalance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Transfer method
    void transfer(double amount, BankCustomer& targetAccount) {
        if (isActive && amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            targetAccount.deposit(amount);
            std::cout << "Transfer successful. New balance: " << accountBalance << std::endl;
        } else {
            std::cout << "Invalid transfer amount or insufficient funds." << std::endl;
        }
    }

    // Print customer details
    void printDetails() const {
        std::cout << "Customer Name: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Balance: " << accountBalance << std::endl;
        std::cout << "Account Status: " << (isActive ? "Active" : "Inactive") << std::endl;
    }
};

int main() {
    // Create two BankCustomer objects
    BankCustomer customer1("John Doe", 123456, 1000.0);
    BankCustomer customer2("Jane Smith", 789012, 1500.0);

    // Demonstrate operations
    customer1.printDetails();
    customer2.printDetails();

    customer1.deposit(500.0);
    customer1.withdraw(200.0);

    customer2.transfer(300.0, customer1);

    // Print updated details
    customer1.printDetails();
    customer2.printDetails();

    return 0;
}
