# Assignment 12 - Fix The Code

### Task
From provided code just replace two lines from they places to get output **100**.

---

### Provided Code 
```cpp
#include <iostream>
using namespace std;

int num = 100;

int read()
{
  int num = 50;
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}
```