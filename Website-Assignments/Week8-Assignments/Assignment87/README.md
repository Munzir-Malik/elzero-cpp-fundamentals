# Ignore Me

### Task

We have a function that fine summation of array numbers the function accepts three parameters the first one to store array of numbers and the second one to store array`s size and the third one to number will be ignore in the summation process.

See the provided code to get the point.

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumAll(numbers, numssize, noneed) << "\n";
  return 0;
}