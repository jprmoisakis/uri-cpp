#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    cin >> x;
    string number;
    int k = x/10;
    int g = x - k*10;

    string numeros[10] = {"zero","one","two","three", "four", "five","six","seven", "eight", "nine"};
    string dezenas[10] = {"zero","ten","twenty","thirty","forty", "fifty","sixty","seventy","eighty","ninety"};
    string teens[10] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

    if(k >=2 && g != 0){
        number = dezenas[k] + "-" + numeros[g];
    }else if(k >=2 && g == 0){
        number = dezenas[k];
    }else if(k==0){
        number = numeros[g];
    }else if(k == 1 && g <=9){
        number = teens[g];
    }
    cout << number <<endl;
    
    return 0;
}