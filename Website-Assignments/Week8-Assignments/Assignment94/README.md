# Simple Calculator

### Task

We have a function that performs more than one arithmetic operation.
The arithmetic operations are addition, subtraction, and multiplication.

The function accepts three parameters:

the first number

the second number

the type of arithmetic operation

Your task is to execute the arithmetic operation based on the given inputs.

If the user enters an incorrect operation type, the function should return 0.

The available arithmetic operations are: add, subtract, multiply.

The user can write only the first letter of the operation name; for example, subtract can be written as s.

If the user does not enter the operation at all, perform the default operation, which is addition.

### Provided Code

```cpp

#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}