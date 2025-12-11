# include <iostream>
using namespace std;

int main() {
  // Output Needed
  // 10
  // 100
  // 10,000
  // 100,000,000

  int i = 10;

  cout << "for loop output: \n";
  for(i; i < 100000001; i*=i ){
    cout << i << "\n";
  }

  i = 10; // Reset i value after for loop

  cout << "\nwhile loop output: \n";
  while (i < 100000001){
    cout << i << endl;
    i*=i;
  }

  return 0;
}