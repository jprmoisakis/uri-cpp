
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int aux,n;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >>aux;
        vec.push_back(aux);
    }

    sort(vec.begin(),vec.end());

    for(int i = 0; i<n; i++){
        cout<< vec[i] << " ";
    }

    return 0;
}