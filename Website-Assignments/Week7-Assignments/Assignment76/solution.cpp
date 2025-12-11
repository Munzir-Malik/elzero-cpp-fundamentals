# include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (true){
    if(i >= 1 && i < 10) cout << "00" << i << "\n";
    else if(i >= 10 && i <= 20) cout << "0" << i << "\n";
    else if(i >= 100) cout << i << "\n";
    if(i == 102) break;
    i++;

  }
  // Output Needed
// 001
// 002
// 003
// 004
// 005
// 006
// 007
// 008
// 009
// 010
// 011
// 012
// 013
// 014
// 015
// 016
// 017
// 018
// 019
// 020
// 100
// 101
// 102

  return 0;
}