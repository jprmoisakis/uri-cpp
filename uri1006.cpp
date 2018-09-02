#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;

    A = A *2;
    B = B *3;
    C = C *5;

    double MEDIA = (A + B + C)/10;
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;

    return 0;
}