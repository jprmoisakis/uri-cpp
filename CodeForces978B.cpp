#include <iostream>
#include <string>

using namespace std;

int main(){
    int x,aux =0,res=0;
    string input = "";
    cin >> x;
    cin >>input;    

    for(int i = 0; i < x; i++ ){
        if(input[i] == 'x'){
            aux++;
        }else{
            aux = 0;
        }
        if (aux >= 3){
            res++;
        }

    }
    cout << res << endl;
    return 0;
}