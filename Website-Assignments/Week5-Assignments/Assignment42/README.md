# Summarise Code

### Task

Summarise conditions to get needed output.

### Provided Code 

```cpp
int age = 40;
int points = 100;

if (age > 18)
{
  cout << "Age Is Ok\n";
  if (points > 50)
  {
    cout << "Points Is Ok\n";
    if (sizeof(age) == 4)
    {
      cout << "Age Data Is 4 Bytes\n";
    }
  }
}
```

### Needed Output
```cpp
"Age Data Is 4 Bytes"
"Age Is Ok"
"Points Is Ok"