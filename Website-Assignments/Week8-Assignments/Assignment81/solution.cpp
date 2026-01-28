#include <iostream>
using namespace std;

float money(float salary, int days)
{
    int weeks = days / 7;
    int holidays = weeks * 2;
    int outingDays = days - holidays;

    return salary / outingDays;
}

int main()
{
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}
