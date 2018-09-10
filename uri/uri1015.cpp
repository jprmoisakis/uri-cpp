#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main(){

    double x1,y1,x2,y2,result;

    cin >> x1 >> y1 >> x2>> y2;
    result = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    cout << fixed << setprecision(4) << result<< endl;
    return 0;
}