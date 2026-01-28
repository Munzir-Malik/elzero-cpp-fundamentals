#include <iostream>
using namespace std;

// Write Your Function Here
int firstNegative(int numbers[], int numbersSize){
  int negative = numbers[0]; // Because the first number will be -10 always in the task.
  for(int i = 0; i < numbersSize; i++){
    if(numbers[i] < 0 && numbers[i] > negative) negative = numbers[i];
  }

  return negative;
}
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstNegative(numbers, numssize) << "\n";
  return 0;
}