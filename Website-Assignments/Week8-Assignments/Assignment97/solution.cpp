#include <iostream>
using namespace std;

// Write Your Function Here
double pricing(int numOfPhones, int numOfUsedPhones, double newPhonePrice, int tax){
  // Phone prices
  double totalNewPhonesPrice = (numOfPhones - numOfUsedPhones) * newPhonePrice;
  double totalUsedPhonesPrice = numOfUsedPhones * (newPhonePrice - 200);
  double totalPrice = totalNewPhonesPrice + totalUsedPhonesPrice;
  
  // Convert tax [e.g: 40 to 0.40]
  double taxRate = tax / 100.0;

  double taxAmount = totalPrice * taxRate;
  double profitAfterTax = totalPrice - taxAmount;

  return profitAfterTax;
}
int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}