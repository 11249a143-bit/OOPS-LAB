#include <iostream>
using namespace std;


class Loan;

class Account {
private:
    double balance;

public:
   
    Account(double b) {
        balance = b;
    }

   
    friend void checkEligibility(Account acc, Loan ln);
};

class Loan {
private:
    double loanAmount;

public:
   
    Loan(double l) {
        loanAmount = l;
    }

    
    friend void checkEligibility(Account acc, Loan ln);
};


void checkEligibility(Account acc, Loan ln) {
    cout << "\n=== Loan Eligibility Check ===" << endl;
    cout << "Account Balance: $" << acc.balance << endl;
    cout << "Loan Requested : $" << ln.loanAmount << endl;

    if (acc.balance >= 2 * ln.loanAmount)
        cout << "Eligible for loan." << endl;
    else
        cout << "Not eligible for loan (balance must be at least twice the loan amount)." << endl;
}


int main() {
    double balance, loanAmt;

    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter loan amount: ";
    cin >> loanAmt;

    Account a1(balance);
    Loan l1(loanAmt);

   
    checkEligibility(a1, l1);

    return 0;
}
