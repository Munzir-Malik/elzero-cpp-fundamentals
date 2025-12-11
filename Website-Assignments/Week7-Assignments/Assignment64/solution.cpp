# include <iostream>
using namespace std;

int main() {
  // Output Needed
  // 0
  // 3
  // 6
  // 9
  // 12
  // 15
  // 18
  // 21
  // 24
  // 27

  int i = 0;

  cout << "for loop output: \n";
  for(i; i < 28; i+=3){
    cout << i << "\n";
  }

  i = 0; // Reset i value after for loop

  cout << "\nwhile loop output: \n";
  while (i < 28){
    cout << i << endl;
    i+=3;
  }

  return 0;
}