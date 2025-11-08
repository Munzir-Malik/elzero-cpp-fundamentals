# Array Inverse

### Task

We have an array that contains a group of numbers wich is the old array.
We also have a new array, which does not contain any elements.
The requirement is that the new array should contain the same numbers as the old array but in reverse order.
Check the example to see what is required.
You are not allowed to write any numbers manually, and you have a variable named index that contains the number 1 to help you.

### Provided Code

```cpp
#include <array>
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit The Next 3 Lines
  int index = 1;
  array<int, 3> oldNums = {10, 20, 30};
  array<int, 3> newNums;

  // Write Your Code Here

  // Do Not Edit The Next 3 Lines
  cout << newNums[0] << "\n"; // 30
  cout << newNums[1] << "\n"; // 20
  cout << newNums[2] << "\n"; // 10

  return 0;
}