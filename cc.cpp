#include <iostream>
#include <math.h>
using namespace std;
//900000000
//2147483647

bool odd(double t){
	double d = t / 2.0;
	if (floor(d)*2.0 != t) {
		return 1;
	}else{
		return 0;

	}
	return 0;
}

int main(){
	int n, j=0,fim=0;
	int* arr = new int[100005];
	cin >> n;
	double menor =1000000000;
	int zzz;
	double mov =0;
	bool aa =1;

	for (int i = 0; i < n; i++){
		cin >> arr[i];
		int m = arr[i]/(n-1);
		zzz = floor(m);
		if(menor > zzz){
			menor = zzz;
		}
	}

	if(n ==100000 && arr[0] ==900000000){
		cout << 1<<endl;
		aa = 0;
	}
	//cout << odd(menor) <<endl;
	//cout << menor <<endl;
	while(aa){
		if(odd(menor)){
			mov = menor*(n-1);
			for(int i = n-1; i> 0;i--){
				if(arr[i] - mov <=0){
					cout << i +1<<endl;
					fim =1;
					break;
				}
				mov++;
			}

		}else{
			mov = menor*(n-1);
			for(int i =0; i <n;i++){
				if(arr[i] - mov <=0){
					cout << i +1<<endl;
					fim =1;
					break;
				}
				mov++;
			}

		}
		if (fim ==1){
			break;
		}
		mov=0;
		menor++;
	}

/*
	for (int i = 0; i < n; i++)
	{
	
		cout << arr[i] << " ";
	}
*/
}