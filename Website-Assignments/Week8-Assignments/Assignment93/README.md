# Formal Greeting

### Task

Creat a function that greeting people in formal way with two parameters the first one to store name and the second to store gender.

Depending on the gender type print `Mr` for `Male`, `Miss` for `Female` and just `Hello` if didn`t entered the gender.

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}