# Average Salary Calculator

### Task

We have a function that accepts two parameters.
The first parameter is an array of numbers, where each number represents the amount of money the person earns each day.
The second parameter is the number of elements in the array.

For example, if the array contains 10 elements, this means the person worked for 10 days, and each number represents the daily salary.

The required task is to calculate the average daily salary that the person earns.

### Provided Code 

```cpp

#include <iostream>
using namespace std;

// Write Your Functions Here

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}