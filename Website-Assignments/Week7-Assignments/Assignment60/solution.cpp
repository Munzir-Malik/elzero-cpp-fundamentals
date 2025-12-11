# include <iostream>
using namespace std;

int main() {
  int start = 0;
  int end = 10;
  // For Output
  cout << "For Output: \n";
  for(start; start <= end; start++){
    cout << start << "\n";
  }

  start = 0; // Reset the variable after For Loop

  // While Output
  cout << "\nWhile Output: \n";
  while (start <= 10)
  {
    cout << start << "\n";
    start++;
  }

  start = 0; // Reset the variable after While Loop

  // Do While Output
  cout << "\nDo While Output: \n";
  do{
    cout << start << "\n";
    start++;
  } while(start <= end);
  
}