#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    double triangle,rectangle,circle,trapezium,square,a, b, c, pi = 3.14159;
    cin >> a >> b >> c;

    triangle = (a*c)/2.0;
    circle = pi* c * c;
    trapezium = (a+b)*c/2.0;
    square = b*b;
    rectangle = a*b;

    cout << "TRIANGULO: "<< fixed << setprecision(3) << triangle <<endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circle <<endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium <<endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square <<endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle <<endl;


    return 0;
}