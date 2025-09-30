# include <iostream>
using namespace std;

int main()
{
  double salary = 5000.98;
  cout << sizeof(salary) << " Bytes\n"; // 8 Bytes
  cout << sizeof(salary) * sizeof(salary) << " Bites\n"; // 64 Bytes

  return 0;
}