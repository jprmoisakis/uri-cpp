#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int NUMBER,B;
    float C;

    cin >> NUMBER;
    cin >> B;
    cin >> C;
    float SALARY = B*C;

    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ "<< fixed << setprecision(2) << SALARY << endl;

    return 0;
}