# include <iostream>
using namespace std;

int main() {
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

  int i = 1;

  cout << "for output: \n";
  for(i; i < 3; i++){
    cout << friends[i] << "\n";
  }

  i = 1; // Reset i value after for loop

  cout << "\nwhile output: \n";
  while(i < 3){
    cout << friends[i] << "\n";
    i++;
  }

  // // Output Needed
  // "Mohamed"
  // "Sayed"

  return 0;
}