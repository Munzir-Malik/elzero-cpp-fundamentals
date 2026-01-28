#include <iostream>
using namespace std;

// Write Your Function Here
int minPositive(int numbers[], int size){
  int temp;
  // Get the first positive number in array
  for(int i = 0; i < size; i++){
    if(numbers[i] > 0){
      temp = numbers[i];
      break;
    }
  }

  // Find samllest positive number in array
  for(int j = 0; j < size; j++){
    if(numbers[j] > 0 && numbers[j] < temp) temp = numbers[j];
  }

  return temp;
}
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minPositive(numbers, numssize) << "\n";
  return 0;
}