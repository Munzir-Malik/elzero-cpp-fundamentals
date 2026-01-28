#include <iostream>
using namespace std;

// Write Your Function Here
int sumAll(int arr[], int size, int ignore){
  int res = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] != ignore){
      res += arr[i];
    }
  }
  return res;
}
int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumAll(numbers, numssize, noneed) << "\n";
  return 0;
}