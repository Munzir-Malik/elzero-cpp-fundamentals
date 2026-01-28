# Find Smallest Positive Number

### Task

Create a function that accepts two parameters the first one to store array of numbers the second one to store size of array, you should return the samllest positive number.

`Note: ` The first number in the array will not change. 

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}