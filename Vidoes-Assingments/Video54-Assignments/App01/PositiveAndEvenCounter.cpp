# include <iostream>
using namespace std;

int main() {
  int nums[] = {10, 20, -20, 13, 30, -30, 40};
  int result = 0;
  int numsSize = sizeof(nums) / sizeof(nums[0]);
  for(int i = 0; i < numsSize; i++){
    if(nums[i] > 0 && nums[i] % 2 == 0 && nums[i]){
      result += nums[i];
    }
  }

  cout << "Result is: " << result;

  return 0;
}