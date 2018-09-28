#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr;
	
	int n,count,aux,b,top;
	set <int> s;
	cin >> n;
	n=n+1;
	arr.push_back(0); 

	for(int i=1; i<n; i++){
		cin >> b;
		arr.push_back(b); 
	}

	top =0;
	count =0;
	for(int i = n-1; i >0; i--){
		
		if(top ==0){
			count++;
			top = arr[i];

		}else{
			top--;
			if(arr[i] > top){
				top =arr[i];
			}
		}	
		

	}

	cout <<  count  <<endl;


	return 0;
}