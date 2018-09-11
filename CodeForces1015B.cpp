#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool AreAnagrams(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main(){
	int n;
	cin >> n;
	string s;
	string t;

	cin >> s;
	cin >> t;

	int low = 0, high = n-1,aux,swapPos[10000],nSwaps=0;

	if(!AreAnagrams(s,t)){
		cout <<"-1"<<endl;
	}else if(s==t){
		cout <<"0"<<endl;
	}else{
		while(s !=t){
			while(low < n -1 && high > 0){
				if(s[low] != t[low]){
					aux = s[low];
					s[low] = s[low +1];
					s[low + 1] = aux;
					cout << "low = "<<s<<endl;
					swapPos[nSwaps] = low;
					nSwaps++;
				}
				low++	;	
			}
			while(high > 0){
				if(s[high] != t[high]){
					aux = s[high];
					s[high] = s[high -1];
					s[high - 1] = aux;
					cout <<"high = "<< s<<endl;
					swapPos[nSwaps] = high;
					nSwaps++;
				}
				high--;					
				
			}
			high = n-1;
			low = 0;
		}
		cout << s <<endl;
		cout << t <<endl;
		cout << nSwaps <<endl;
		for (int i = 0; i < nSwaps; i++){
			cout <<swapPos[i] <<" ";
		}
	}

	return 0;
}