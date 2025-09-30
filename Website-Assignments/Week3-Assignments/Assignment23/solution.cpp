# include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 13;
  int c = 17;
  int d = 70;

  // Get character ascii
  // cout << int('E') << endl; => 69
  // cout << int('W') << endl; => 87
  // cout << int('S') << endl; => 83

  // Calculate and print the result
  cout << char(d - a) << char(c + d) << char(b + d);

  // Output Needed
  // "EWS"

  return 0;
}