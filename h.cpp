#include <bits/stdc++.h>

using namespace std;

void swapSeg(vector<int> vec, int a, int b){
	int i =a,j=b;
	while(i < j){
		swap(vec[i],vec[j]);

		cout <<vec[i] << " " <<vec[j]<<endl;
		i++;
		j--;
	}	

	
	for(int i =0; i <vec.size();i++){

		cout <<vec[i];
		
	}
	cout <<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
		
	int n,aux;

	vector <int> arr;
	cin >>n;
	for(int i =0; i <n ; i++){
		cin >>aux;
		arr.push_back(aux);
	}
	
	int i,j;

	if(n%2 ==0){
		i = n/2 -1;
		j = n/2;
		//cout << "dasd"<< j<<endl;
	}else{
		i =j = n/2;		
		cout << "dasd"<< j<<endl;
		cout << "dasd"<< j<<endl;
	}
	
	//cout << "dasd"<< j<<endl;
	while(i>= 0&& j <n){
		swapSeg(arr,i,j);
		i--;
		j++;
		//cout << "dasd"<< j<<endl;
	}			
	

		
	

	for(int i =0; i <n;i++){

		cout <<arr[i];
		
	}
	

	
	return 0;
}
