# include <iostream>
using namespace std;

int main () {
  // Add Type Alias Here
  using lli = long long int; // Modren Way
  typedef long long int lli; // Old c-style way
  #define lli long long int // Preprocessor Way

  // Do Not Edit
  lli num = 150050005; // This Is Long Long Int
  cout << num << "\n"; // 150050005

  return 0;
}