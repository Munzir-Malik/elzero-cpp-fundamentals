# Book shelfs

### Task
We have a function that accepts four parameters.

The first parameter is the number of small books, and each small book needs 2 spaces on the shelf.

The second parameter is the number of medium books, and each medium book needs 4 spaces on the shelf.

The third parameter is the number of large books, and each large book needs 6 spaces on the shelf.

The fourth parameter is the number of shelves, and each shelf contains 20 spaces.

The required task is to distribute the books on the shelves and determine how many spaces remain.

If the total number of spaces required by the books is greater than the available spaces on the shelves, the function should return 0.

### Provided Code 

```cpp

#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}