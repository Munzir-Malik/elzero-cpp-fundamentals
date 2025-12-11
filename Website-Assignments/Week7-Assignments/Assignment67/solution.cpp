# include <iostream>
using namespace std;

// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126

int main() {
  int num, i;
  num = i = 2;

  cout << "for loop output: \n";
  for(i; i < 127; i+=num){
    cout << i << "\n";
    num*=2;
  }

  num = i = 2;//Reset num and i value after for loop

  cout << "\nwhile loop output: \n";
  while (num < 127)
  {
    cout << i << "\n";
    num *= 2;
    i += num;
  }
  
  return 0;
}