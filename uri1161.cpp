#include <iostream>

using namespace std;

long long fatorial(int n){
	long long fatorial = n;
	for (int i = 1; i < n; i++){
		fatorial = fatorial * (n-i);
		//cout << i<<endl;

	}
	if(n==0){
		fatorial = 1;
	}
	return fatorial;
}



int main(){
	int x, y;
	while(cin >> x >> y){
		cout <<fatorial(x) + fatorial(y)<<endl;
	}

}