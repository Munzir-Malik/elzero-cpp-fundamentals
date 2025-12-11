# include <iostream>
# include <algorithm>
using namespace std;

int main() {
  int num1, num2;
  cout << "Enter your first number: ";
  cin >> num1;
  cout << "Enter your second number: ";
  cin >> num2;

  if(num1 == num2) cout << "Enter two different values\n";

  int start = min(num1, num2);
  int end = max(num1, num2);
  bool first = true;

  for(int i = start + 1; i < end; i++){
    if(i % 2 != 0){
      if(!first) cout << ", ";
      cout << i;
      first = false;
    }
  }

  // // Incase number1 smaller than number2
  // if(num1 < num2){ 
  //   for(int i = num1+1; i < num2; i++){
  //     if(i % 2 != 0 ){
  //       cout << i;
  //       cout << ", ";
  //     }
  //   }
  // } else if (num1 > num2){ // Incase number1 bigger than number2
  //   for(int i = num2+1; i < num1; i++){
  //     if(i % 2 != 0 ){
  //       cout << i;
  //       cout << ", ";
  //     }
  //   }
  // }

  // else
  // cout << "Enter two different numbers.\n";

  /*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/

  return 0;
}