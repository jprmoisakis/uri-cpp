#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int code,units,code2,units2;
    float price, price2;

    cin >> code >> units >> price;
    cin >> code2 >> units2 >> price2;

    float TOTAL = units*price + units2*price2;

    cout <<"VALOR A PAGAR: R$ " << fixed << setprecision(2) << TOTAL <<endl;
    return 0;
}