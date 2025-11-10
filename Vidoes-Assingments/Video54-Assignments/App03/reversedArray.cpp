# include <iostream>
using namespace std;

int main(){
  int vals[5];
  int valsSize = sizeof(vals) / sizeof(vals[0]);
  int userInput;

  cout << "Enter five numbers in a row, please press enter or space after any number you enter.\n";
  cout << "Your number in row: ";
  // Store elements in reversed order inside the array
  for(int i = valsSize-1; i >= 0; i--){
    cin >> vals[i];
  }

  // Print array elements
  for(int i = 0; i < valsSize; i++){
    cout << vals[i] << " ";
  }

  return 0;
}