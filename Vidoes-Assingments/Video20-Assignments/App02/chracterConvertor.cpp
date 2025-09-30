# include <iostream>
using namespace std;

int main ()
{
  char character;
  cout << "Enter a caracter to convert it to ASCII value: ";
  cin >> character;

  cout << "The ASSCI value is: " << int(character);

  return 0;
}