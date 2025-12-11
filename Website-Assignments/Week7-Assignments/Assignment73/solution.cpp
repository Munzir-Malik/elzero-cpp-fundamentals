# include <iostream>
using namespace std;

int main() {
  int result = 1;
  int num = 2; 
  int add = 3; // First difference

  cout << "for loop output\n";
  for(int i = num; i < 382; i *= num){
    cout << result << "\n";
  
    result += add;
    add *= 2;
  }

  cout << "=========\n";

  result = 1;
  num = 2; 
  add = 3; 

  // while loop
  cout << "while loop output\n";
  while (num < 520) {
    if(result > 382) break;
  
    cout << result << "\n";
  
    result += add;
    add *= 2;
    num *= 2;
  
}

// Needed Output
// 1
// 4
// 10
// 22
// 46
// 94
// 190
// 382

  return 0;
}