
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n,j,arr[10000],qtd =0,aux =0;
    float results[10000],media=0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> j; 
        for(int k = 0; k<j;k++){
            cin >> arr[k];
        }

        for(int k = 0; k<j;k++){
            media = media + arr[k];
        }
        media = media/j*1.0;
        for(int k = 0; k<j;k++){
            if(arr[k] > media){
                qtd++;
            }
        }

        float result = (qtd*100.0)/j;
        results[i] = result;
        qtd = 0;
        media =0;
    }

    for(int i = 0; i< n;i++){
        cout <<fixed<<setprecision(3)<<results[i]<<"%"<<endl;
        
    } 

    return 0;
}