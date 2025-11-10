Aim:
  To practice simple console-based graphical representation using loops.
Algorithm:
  1. Read marks for 5 subjects.
  2. For each mark, compute barLength = mark / 2 (so 100 → 50 chars).
  3. Print subject label and that many *.
Program:
  #include <iostream>
  #include <vector>
  #include <iomanip>
  using namespace std;
  int main() {
   vector<int> marks(5);
   cout << "Enter marks for 5 subjects (0-100):\n";
   for (int i = 0; i < 5; ++i) {
   cin >> marks[i];
   if (marks[i] < 0) marks[i] = 0;
   if (marks[i] > 100) marks[i] = 100;
   }
   cout << "\nText Bar Chart (each * = 2 marks)\n\n";introduction
   for (int i = 0; i < 5; ++i) {
   cout << "Sub" << (i+1) << " [" << setw(3) << marks[i] << "]: ";
   int bars = marks[i] / 2;
   for (int j = 0; j < bars; ++j) cout << '*';
   cout << '\n';
   }
   return 0;
  }
