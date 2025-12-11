# include <iostream>
using namespace std;

int main() {
  int help_num = 4;
  int nums[] = {2, 4, 5, 6, 10};
  int start = help_num - help_num;//0 =>Acts as Beginnig of the loop
  int end = help_num;//4 => Acts as end of the loop

  for(int i = start; i <= end; i++){
    int partner_index = end - i;

    cout << nums[i] << " + " << nums[partner_index] << " = " << nums[i] + nums[partner_index] << "\n";
  }

  // Output Needed
  // "2 + 10 = 12"
  // "4 + 6 = 10"
  // "5 + 5 = 10"
  // "6 + 4 = 10"
  // "10 + 2 = 12"

  return 0;
}