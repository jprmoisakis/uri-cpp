
#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main(){

    multiset <int> mt;
    vector <int> jack,jill;
    int n,m,ent,a,a1;
    string str;
    while(1){
        cin >>n >>m; 
        if(n ==0 && m==0){
            break;
        }
        for(int i =0; i<m+n;i++){
            cin>>ent;
            mt.insert(ent);
            jill.push_back(ent);
            
        }
        a=0;
        for(int i = 0; i<m+n;i++){
            if(mt.count(jill[i]) >1){
                a++;
                //cout <<mt.count(jill[i])<< "dds"<< endl;
            }
        }
        cout << a/2 <<endl;
        mt.clear();
        jill.clear();
    }

    return 0;

}