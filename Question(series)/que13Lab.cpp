// Create class SavingsAccount. Use a static variable annualInterestRate to store the annual interest rate for all account holders. Each object of the class contains a private instance variable savingsBalance indicating the amount the saver currently has on deposit. Provide method calculateMonthlyInterest() to calculate the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12.This interest should be added tosavingsBalance. Provide a static method modifyInterestRate() that sets the annualInterestRate to a new value. Write a program to test class SavingsAccount. Instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers

#include <iostream>
using namespace std;

class SavingsAccount {
private:
    double savingsBalance;
    static double annualInterestRate;

public:
    SavingsAccount(double balance) {
        savingsBalance = balance;
    }

    void calculateMonthlyInterest() {
        double monthlyInterest = savingsBalance * (annualInterestRate / 12);
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    void displayBalance() const {
        cout << "Current balance: Rs " << savingsBalance << endl;
    }
};

double SavingsAccount::annualInterestRate = 0.04;

int main() {
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    cout << "After setting interest rate to 4%:" << endl;
    saver1.calculateMonthlyInterest();
    saver1.displayBalance();
    
    saver2.calculateMonthlyInterest();
    saver2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05);

    cout << "\nAfter setting interest rate to 5%:" << endl;
    saver1.calculateMonthlyInterest();
    saver1.displayBalance();
    
    saver2.calculateMonthlyInterest();
    saver2.displayBalance();

    return 0;
}
