#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	string t;

	cin >> s;
	cin >> t;

	int low = 0, high = n-1,aux;

	while(low <high){

		if(s[low] != t[low]){
			aux = s[low];
			s[low] = s[low +1];
			s[low + 1] = aux;
		}
		if(s[high] != t[high]){
			aux = s[high];
			s[high] = s[high -1];
			s[high - 1] = aux;
		}

	}

	cout << s <<endl;
	cout << t <<endl;


	return 0;
}