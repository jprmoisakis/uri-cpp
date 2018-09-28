#include <iostream>
#include <math.h> 
using namespace std;

int main(){

	long long int res = 1,sum = 1,pred =1,k,arr[105];
	int count,n;
	cin >> n;
	for(int i =0; i<n ;i++){
		cin >>count;
		if(count !=64){
			for (int i = 1; i < count; i++){
				res = pred*2;
				pred = res;
				sum = sum +res;
			}
			arr[i] = sum/12000;

			res = sum = pred =1;
		}else{
			arr[i] = 1537228700000000;
			
		}

	}
	for (int i = 0; i < n; i++){

		cout << arr[i] <<" kg"<<endl;
	}
	


	return 0;
}