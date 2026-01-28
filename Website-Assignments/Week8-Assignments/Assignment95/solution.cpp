#include <iostream>
using namespace std;

// Write Your Functions Here
double avg (int salaryPerDay[], int nOfDays){
  double sum = 0;
  for(int i = 0; i < nOfDays; i++){
    sum += salaryPerDay[i];
  }
  return sum / nOfDays;
}
int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}