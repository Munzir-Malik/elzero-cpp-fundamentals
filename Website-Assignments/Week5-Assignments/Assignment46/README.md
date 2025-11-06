# If To Switch

### Task

You have this code written by If conditions replace them with Switch cases.

### Provided Code

```cpp
#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  if (num == 10)
  {
    cout << "Case 1";
  }
  else if (num > 19 && num < 21)
  {
    cout << "Case 2";
  }
  else if (num > 29 && num < 33)
  {
    cout << "Case 3";
  }
  else
  {
    cout << "Invalid Number";
  }

  return 0;
}