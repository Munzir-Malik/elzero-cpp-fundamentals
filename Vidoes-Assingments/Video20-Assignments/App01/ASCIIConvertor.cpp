# include <iostream>
using namespace std;

int main ()
{
  int ascii;
  cout << "Enter an ASCII value to convert it to character: ";
  cin >> ascii;

  cout << "The character is: " << char(ascii);

  return 0;
}