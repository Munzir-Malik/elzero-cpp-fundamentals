# include <iostream>
using namespace std;

int main ()
{
  int userInput;

  cout << "Enter number of Kilobytes and i will convert them to Bytes and Bits: ";
  cin >> userInput;

  cout << "Number of Kilobytes you enterd is: " << userInput << " Kilobytes\n";
  cout << "Converted to Bytes: " << userInput * 1024 << " Bytes\n";
  cout << "Converted to Bits: " << userInput * 1024 * 1024 << " Bits\n";

  return 0;
}