#include <iostream>

using namespace std;

//se par -1 se impar +1
int odd(int n){
    return n % 2;
}


void replace(int arr[], int n){

     for(int i =0; i<n;i++){
        if(!odd(arr[i])){
            arr[i] = arr[i]-1;
        }
    }
     
}

int maior(int arr[],int n){
    int m =0;
    for(int i = 0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
        }
    
    }
    return m;
}

int main(){
    int n,arr[10000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    replace(arr,n);
    

    for(int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}