#include <iostream>
using namespace std;

// Write Your Function Here

void thepower(int num, int pow){
  int res = num;
  for(int i = 1; i < pow; i++){
    res *= num;
  }
  cout << res;
  return ;
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}