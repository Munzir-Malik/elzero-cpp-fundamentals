# include <iostream>
using namespace std;

int main(){
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  int i = 0;
  int size = sizeof(friends) / sizeof(friends[0]);

  cout << "for output: \n";
  for(i; i < size; i++){
    if(friends[i][0] == 'A'){
      cout << friends[i] << "\n";
    }
  }

    i = 0; // Reset i value after for loop

  cout << "\nwhile output: \n";
  while (i < size)
  {
    if(friends[i][0] == 'A'){
      cout << friends[i] << "\n";
    }
    i++;
  }
  

  // Output Needed
  // "Ahmed"
  // "Ashraf"
  // "Amany"

  return 0;
}