#include <iostream>
using namespace std;


int main(){

    int value,cem,cqt,vte,dez,cic,doi,um;

    cin >> value;

    cem = value/100;
    cqt = (value - 100*cem)/50;
    vte = (value - 100*cem - cqt*50)/20;
    dez = (value - 100*cem - cqt*50 - vte*20)/10;
    cic = (value - 100*cem - cqt*50 - vte*20 - dez*10)/5;
    doi = (value - 100*cem - cqt*50 - vte*20 - dez*10 - cic*5)/2;
    um =  (value - 100*cem - cqt*50 - vte*20 - dez*10 - cic*5 - doi*2)/1;

    cout << value<<endl;
    cout << cem<<" nota(s) de R$ 100,00" <<endl;
    cout << cqt<<" nota(s) de R$ 50,00" <<endl;
    cout << vte<<" nota(s) de R$ 20,00" <<endl;
    cout << dez<<" nota(s) de R$ 10,00" <<endl;
    cout << cic<<" nota(s) de R$ 5,00" <<endl;
    cout << doi<<" nota(s) de R$ 2,00" <<endl;
    cout << um<<" nota(s) de R$ 1,00" <<endl;
    

    return 0;
}