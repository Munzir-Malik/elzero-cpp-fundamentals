# include <iostream>
using namespace std;

int main() {
  // Output Needed
  // 2
  // 4
  // 8
  // 16
  // 32
  // 64
  // 128

  int i = 2;

  cout << "for loop output: \n";
  for(i; i < 129; i*=2){
    cout << i << "\n";
  }

  i = 2; // Reset i value after for loop

  cout << "\nwhile loop output: \n";
  while (i < 129){
    cout << i << endl;
    i*=2;
  }

  return 0;
}