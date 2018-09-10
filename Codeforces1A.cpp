#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double n, m, a;

    cin >> n >> m >>a;

    double resN = ceil(n/a);
    double resM = ceil(m/a);

    long long result = resN*resM;
    
    cout << result<< endl;
    return 0;
}