# Phones And Taxs

### Task

We have a function that accepts four parameters.

The first parameter is the total number of phones the company will sell.

The second parameter is the number of used phones from the total.

The third parameter is the price of a new phone.

The fourth parameter is the tax value as a percentage that the company must pay (for example, 40 means 40%).

A used phone costs 200 less than a new one.

The required task is to calculate the company’s total profit after paying the taxes.

### Provided Code

```cpp

#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}