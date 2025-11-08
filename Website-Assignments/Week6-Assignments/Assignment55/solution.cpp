# include <iostream>
using namespace std;

int main() {
  int nums[] = {10, 20, 30, 40, 20, 50};

// Method 1
// result 6
  cout << sizeof(nums) / sizeof(nums[0]) << "\n";
  // Method 2
  cout << size(nums) << "\n";
  // result 6
  
  // Method 3
  cout << end(nums) - begin(nums) << "\n";
// result 6

  return 0;
}