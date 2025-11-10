           //overriding member fuctions//
Aim:
 //To show function overriding using inheritance.//
Algorithm:
  1. Create base Account class with displayBalance().
  2. Derive Savings and Current overriding the function.
  3. Use base pointer to call them.
Program:
  #include <iostream>
  using namespace std;
  class Account {
  public:
   virtual void displayBalance() {
   cout << "Generic account balance.\n";
   }
  };
  class Savings : public Account {
  public:
   void displayBalance() {
   cout << "Savings Account Balance: ₹5000\n";
   }
  };
  class Current : public Account {
  public:
   void displayBalance() {
   cout << "Current Account Balance: ₹10000\n";
   }
  };
  int main() {
   Account *acc;
   Savings s;
   Current c;
   acc = &s; acc->displayBalance();
   acc = &c; acc->displayBalance();
  }
