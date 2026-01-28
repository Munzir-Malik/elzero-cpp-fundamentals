# include <iostream>
# include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string str){
  string swapped = "";
  for(int i = 0; i < str.size(); i++){
    if(str[i] == 'h' || str[i] == 'H') swapped += str[i];
    else if(isupper(str[i])) swapped += tolower(str[i]);
    else swapped += toupper(str[i]);
  }

  return swapped;
}
int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}