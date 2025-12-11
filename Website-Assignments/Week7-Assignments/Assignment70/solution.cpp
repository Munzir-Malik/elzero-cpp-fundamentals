# include <iostream>
using namespace std;

int main(){
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int size = sizeof(friends) / sizeof(friends[0]);

  for(int i = 0; i < size; i++){
    cout << "=========\n";
    cout << "= ";
    cout << friends[i] << " =\n";
    cout << "==================\n";
    cout << "== ";
  
    for(int j = 0; j < friends[i].length(); j++){
      cout << friends[i][j];
      if(j < friends[i].length() - 1) cout << ", ";
    }
    cout << " =\n";
    cout << "==================\n";

  }

// Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================

  return 0;
}