# URL Builder

### Task

Create a functoin that create websites URL which accepts four parameters: 

1. First parameter to store `protocol`.
2. Second parameter to store `webstie name`.
3. Third parameter to store `domain`.
4. Fourth parameter to check if the url contains`www` or not, `Note: ` It should be true as default.

### Provided Code

```cpp
#include <iostream>
using namespace std;

// Write Your Function Here
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}