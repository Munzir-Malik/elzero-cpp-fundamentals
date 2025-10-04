# Logic

### Task

Replce `?` with **all given logical opreators** to get result `true`.

### Provided Code

```cpp
/*
  We Need To Use These Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

int a = 10;
int b = 25;
int c = 15;

cout << (a ?? b) << "\n";          // True
cout << (c ?? a) << "\n";          // True
cout << (a + c ?? b) << "\n";     // True
cout << (c ?? a) << "\n";         // True
cout << (c ?? b) << "\n";         // True
cout << (b ?? a ?? b ?? c) << "\n"; // True
cout << ??(a ?? b) << "\n";         // True
cout << (a ?? b ?? b ?? a) << "\n"; // True
```