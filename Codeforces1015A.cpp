#include <iostream>

using namespace std;

int main(){

    int n, m,x[1000],y[1000],elim[10000],aux[1000],k=0;
    cin >> n >> m;
    
    for(int i = 0;i<n;i++){
        cin >> x[i] >> y[i];    
    }

    for(int i = 0; i<n; i++){
        for(int j = 1 ; j <= m; j++){
            if( j >= x[i] && j <=y[i]){
                elim[k] = j;
                k++;
            } 
        }
    }
    
    for(int i = 1; i<=m; i++){
        aux[i] = i;
    }
    
    for(int i = 1; i<=m; i++){
        for(int j = 0; j<k; j++){
            if(aux[i] == elim[j]){
                aux[i] = -1;
            }
        }
    }
    n=0;

    for(int i = 1; i<=m; i++){
        if(aux[i] != -1){
            n++;
        }
    }
    cout << n <<endl;

    for(int i = 1; i<=m; i++){
        if(aux[i] != -1){
            cout <<aux[i];
            if(i!=m){
                cout <<" ";
            }    
        }
        if(i==m && n!=0){
            cout << endl;
        }
    }

    return 0;
}