#include <iostream>
using namespace std;

// Write Your Function Here
int books(int small, int medium, int large, int shelfs){
  int smallBooks = small * 2;
  int mediumBooks = medium * 4;
  int largeBooks = large * 6;
  int totalShelfSize = smallBooks + mediumBooks + largeBooks;
  int maximumSize = shelfs * 20;

  if(totalShelfSize > maximumSize) return 0;

  return maximumSize - totalShelfSize;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}