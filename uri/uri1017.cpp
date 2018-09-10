#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t, as;
    float res;
    cin >> t >>as;

    res = t*as/12.0;
    cout <<fixed<<setprecision(3) <<res<<endl;
    return 0;
}