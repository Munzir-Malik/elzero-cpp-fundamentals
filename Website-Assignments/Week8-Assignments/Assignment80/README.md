# Add Or Subtract

### Task

Create a function that accepts two integers and applying these conditions:

1. Add number one to number two if they are eqaules.
2. Subtract number two from number one if number one is bigger than number two.
3. Subtract number one from number two if number two is bigger than number one.

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here
int calcspecial(int n1, int n2){
  if(n1 == n2) return n1 + n2;
  else if (n1 > n2) return n1 - n2;
  else if(n1 < n2) return n2 - n1;
}
int main()
{
  cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
  cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
  cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
  return 0;
}