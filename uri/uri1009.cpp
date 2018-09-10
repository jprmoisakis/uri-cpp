#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string name;
    double salary, totalSold, bonus, TOTAL;

    cin >> name;
    cin >> salary;
    cin >> totalSold;

    bonus = 0.15*totalSold;

    TOTAL = salary + bonus;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL <<endl;

    return 0;
}