#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};
  int last = sizeof(nums) / sizeof(nums.front()) - 1;

  // Method 1
  cout << "First: " << nums[0] << "\n";
  cout << "Last: " << nums[last] << "\n";

  // Method 2
  cout << "First: " << nums.at(0) << "\n";
  cout << "Last: " << nums.at(last) << "\n";

  // Method 3
  cout << "First: " << nums.front() << "\n";
  cout << "Last: " << nums.back() << "\n";
  

  return 0;
}