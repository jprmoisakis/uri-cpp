#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream> 
#include <iterator>
using namespace std;


int main(){

    vector <string> str;
    string aux,a,b,words;
    map <string,string> m;
    stringstream stream;
    map<string, string>::iterator it;

    while(1){
        getline(cin,aux);
        if(aux ==""){
            break;
        }
        stream << aux;
        stream >> a;
        stream >> b;
        m[b] = a;
        stream.clear();
    }
    while(cin>>words){
        bool exists = 0;

        for(it = m.begin();it != m.end(); it++){
            if(it -> first == words){
                cout << it ->second<<endl;
                exists = 1;
                break;
            }

        }
        if(!exists){
            cout << "eh" <<endl;
        }


    }

    return 0;
}
/*
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay


atcay
ittenkay
oopslay*/