#include <iostream>
#include <string>
#include <algorithm>
//GNU G++11 5.1.0

using namespace std;

bool isSubtring(string a, string b){
	bool is = 0;
	if (b.find(a) != std::string::npos) {
		is = 1;
	}
	return is;
}

void sw(string arr[],int  i ,int  j){
	string aux = arr[i];
	arr[i] = arr[j];
	arr[j] = aux;
}


void bbSort(string arr[], int n){

	for(int i=0; i<n-1;i++){
		for (int j = 0; j < n-i-1; j++){
			if(arr[j].length() > arr[j+1].length()){
				sw(arr,j,j+1);
			}
		}

	}
}





int main(){
	int n;
	string arr[105];
	cin >> n;
	int minsize =0;
	for (int i = 0; i < n; i++){
		cin >>arr[i];
	}
	//cout <<arr[1].length()<<endl;
	string sorted[105]= arr;

	sort(sorted,sorted +n);

	bbSort(sorted,n);

	for(int i = 0;i<n;i++){
		if(i+1<n){
			if(!isSubtring(sorted[i],sorted[i+1])){
				cout << "NO";
				return 0;
			}
		}
	}


	cout << "YES"<<endl;
	
	for (int i = 0; i < n; ++i){
		cout << sorted[i]<<endl;
	}

	return 0;
}