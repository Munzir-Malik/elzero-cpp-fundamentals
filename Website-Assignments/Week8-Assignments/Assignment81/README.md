# Outgoings Except Holidays

### Task

You have a function that calculates the amount of money you need per day to go out, spend time, and learn.

The function takes two parameters:

The first parameter is your salary, and its type is float.

The second parameter is the number of days, and its type is integer.

For every full week within the given days, there are two days off during which you do not go out, so no expenses are needed for those days.

Only complete weeks count for the two days off; any remaining days are calculated normally.

Calculate the amount of money you need for each day you go out, based on your salary.

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}