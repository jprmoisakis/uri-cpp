#include <bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;

	cin >>n;
	string a = "";
	
	//a = a + "aa";

	//int i = 1;
	//cout << 4%2;

	for(int i =0; i < n/2;i++){
		if (i==0){
			a = a + "aa";

		}else if(i==1){
			a = a + "bb";
			
		}else if(i%2 ==0){
			a = a +"aa";
		}else{
			a = a + "bb";
			if(i< n/4){
				a = a +a;
				i = i*2 +1;
			}
		}

	}

	if( n > a.length()){
		if(a[a.length() -1] == 'a'){
			a =a +"b";
		}else{
			a =a + "a";
		}
	}


	cout << a <<endl;	
	return 0;
}
