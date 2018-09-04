#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double raio;
    cin >> raio;

    double volume = (4/3.0)*3.14159*raio*raio*raio;

    cout << "VOLUME = "<< fixed << setprecision(3) << volume << endl;


    return 0;
}
