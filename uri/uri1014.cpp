#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    float y;

    cin >> x >> y;

    float res = x/y;

    cout << fixed << setprecision(3) << res <<" km/l"<< endl;
    return 0;
}