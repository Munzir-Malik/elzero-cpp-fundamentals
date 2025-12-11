# include <iostream>
using namespace std;

int main(){
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
  int namesSize = sizeof(names) / sizeof(names[0]);

  for(int i = 0; i < namesSize; i++){
    if(names[i].length() == 5) cout << names[i] << "\n";
  }
  // // Output Needed
  // "Osama"
  // "Ahmed"
  // "Hagar"
  // "Salwa"
  return 0;
}