#include <iostream>
#include <algorithm>
using namespace std;

// Write Your Function Here
float calculate(float num1, float num2, string process = "add"){
  transform(process.begin(), process.end(), process.begin(), ::tolower);
  if(process == "add" || process == "a") return num1 + num2;
  else if(process == "subtract" || process == "s") return num1 - num2;
  else if(process == "multiply" || process == "m") return num1 * num2;
  else 
  return 0;
}
int main()
{
  cout << "To use this function you should enter two numbers in row and type the process name ";
  cout << "Hints to type process name correctly: \n";
  cout << "add or \"a\" to make addition process.\n";
  cout << "subtract or \"s\" to make subtraction process.\n";
  cout << "multiply or \"m\" to make multiplicatoin process.\n";

  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}