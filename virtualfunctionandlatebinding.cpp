Aim:
 //To demonstrate virtual functions and late binding.//
Algorithm:
  1. Create base class Employee with name and virtual calculateSalary().
  2. Derive FullTime with basic and bonus. Override calculateSalary().
  3. Derive PartTime with hourlyRate and hours. Override calculateSalary().
  4. Create Employee* pointers to FullTime and PartTime objects and call calculateSalary()
  — resolves at runtime.
Program:
  #include <iostream>
  #include <string>
  using namespace std;
  class Employee {
  protected:
   string name;
  public:
   Employee(const string& n=""): name(n) {}
   virtual double calculateSalary() { return 0.0; } // virtual
   virtual void show() {
   cout << "Employee: " << name << ", Salary: " << calculateSalary() << endl;
   }
   virtual ~Employee() {}
  };
  class FullTime : public Employee {
   double basic, bonus;
  public:
   FullTime(const string& n, double b, double bo) : Employee(n), basic(b), 
  bonus(bo) {}
   double calculateSalary() override {
   return basic + bonus;
   }
   void show() override {
   cout << "FullTime: " << name << ", Salary: " << calculateSalary() << endl;
   }
  };
  class PartTime : public Employee {
   double hourlyRate;
   int hours;
  public:
   PartTime(const string& n, double r, int h) : Employee(n), hourlyRate(r), 
  hours(h) {}
   double calculateSalary() override {
   return hourlyRate * hours;
   }
   void show() override {
   cout << "PartTime: " << name << ", Salary: " << calculateSalary() << endl;
   }
  };
  int main() {
   Employee* e1 = new FullTime("Alice", 40000, 5000);
   Employee* e2 = new PartTime("Bob", 300.0, 80);
   // late binding: calls derived implementations
   e1->show();
   e2->show();
   delete e1; delete e2;
   return 0;
  }
