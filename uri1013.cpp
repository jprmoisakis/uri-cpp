#include <iostream>
#include <cmath>
using namespace std;

int maior(int a, int b){
    int gr = (a + b + abs(a -b))/2;
    return gr;
}

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    int m = maior(a,b);
    cout << maior(m,c) << " eh o maior" <<endl;

    return 0;
}

