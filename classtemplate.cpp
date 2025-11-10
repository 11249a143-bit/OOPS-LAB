Aim:
  To demonstrate class templates for generic numeric operations.
Algorithm:
  1. Define template<class T> class Calculator.
  2. Implement arithmetic methods; handle division by zero (return 0 or throw).
  3. Demonstrate with int and double.
Program:
  #include <iostream>
  using namespace std;
  template <class T>
  class Calculator {
  public:
   T add(T a, T b) { return a + b; }
   T sub(T a, T b) { return a - b; }
   T mul(T a, T b) { return a * b; }
   T divide(T a, T b) {
   if (b == 0) {
   cerr << "Error: Division by zero. Returning 0.\n";
   return 0;
   }
   return a / b;
   }
  };
  int main() {
   Calculator<int> ci;
   cout << "Int add: " << ci.add(10, 5) << ", div: " << ci.divide(10, 2) << endl;
   Calculator<double> cd;
   cout << "Double mul: " << cd.mul(2.5, 4.0) << ", sub: " << cd.sub(5.0, 3.2) << 
  endl;
   return 0;
  }
