#include <iostream>
#include <algorithm>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "Empty"){
  string result;
  //Convert string to lower case
  transform(result.begin(), result.end(), result.begin(), ::tolower);
  if(gender == "male") result = "Hello Mr " + name;
  else if(gender == "female") result = "Hello Miss " + name;
  else
  result = "Hello " + name;
  return result;
}
int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}