#include <iostream>
#include <string>

using namespace std;






int main(){
	int n, moves[10001],aux = 0;
	string s,t;
	cin >> n;

	cin >> s;
	cin >>t;	

	//cout << t <<endl;

	for (int i = 0; i < n-1; i++){
		for(int j=0; j< n-i;j++){
			if(s[j] != t[j]|| ) {
				swap(s[j],s[j+1]);
				moves[aux] = j+1;
				aux++;
			}

		}
	}

	/*if(s.compare(t) != 0){
		cout << -1;
		return 0;
	}*/
	cout << s << endl;

	for (int i = 0; i < aux; i++){
		cout << moves[i] << " ";

	}
	return 0;
}