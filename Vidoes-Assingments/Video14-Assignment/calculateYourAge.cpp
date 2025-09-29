# include <iostream>
using namespace std;

int main ()
{
  int age, age_in_months, age_in_days, age_in_hours, age_in_minutes, age_in_seconds;
  // Welcome message
  cout << "======================================\n";
  cout << "== Welcome to Claculate Your Age App ==\n";
  cout << "======================================\n";

  cout << "Enter Your age by years: \n";
  cin >> age;


  age_in_months = age * 12;
  age_in_days = age_in_months * 30;
  age_in_hours = age_in_days * 24;
  age_in_minutes = age_in_hours * 60;
  age_in_seconds = age_in_minutes * 60;

  cout << "Your age in months is: " << age_in_months << "\n";
  cout << "Your age in days is: " << age_in_days << "\n";
  cout << "Your age in minutes is: " << age_in_minutes << "\n";
  cout << "Your age in seconds is: " << age_in_seconds << "\n";
}