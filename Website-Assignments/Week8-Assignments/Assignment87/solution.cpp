#include <iostream>
using namespace std;

// Write Your Function Here
  int plusAndMultiply(int arr[], int size){
    int sumOfEven = 0, multiOfOdd = 1;
    for(int i = 0; i < size; i++){
      if(arr[i] % 2 == 0) sumOfEven += arr[i];
      if(arr[i] % 2 != 0) multiOfOdd *= arr[i];
    }
    return sumOfEven + multiOfOdd;
  }

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusAndMultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}