#include <iostream>
using namespace std;

// Write Your Function Here
int beforeResult(int number, int repeat){
  int res = number;
  for (int i = 1; i <= repeat; i++){
    res += number - i;
  }

  return res;
}
int main()
{
  cout << beforeResult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
  // Main Number [10]
  // Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
  cout << beforeResult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
  // Main Number [1015
  // Numbers Before [14 + 13 + 12] <- 3 Numbers
  return 0;
}