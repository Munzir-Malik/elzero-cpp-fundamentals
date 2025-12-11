# include <iostream>
using namespace std;

int main() {
  // Output Needed
  // 0
  // 2
  // 4
  // 6
  // 8
  // 14
  // 16
  // 18

  int i = 0;
  cout << "for loop output: \n";
  for (i; i < 19; i+=2){
    if(i != 10 && i != 12){
      cout << i << "\n";
    }
}

  i = 0; // Reset i value after for loop

  cout << "\nwhile loop output: \n";
  while(i < 19){
    if(i != 10 && i != 12){
      cout << i << "\n";
    }
    i+=2;
  }

  return 0;
}