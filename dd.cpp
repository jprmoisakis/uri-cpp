#include <iostream>
#include <math.h>
using namespace std;
//900000000
//2147483647

bool odd(int s){
	return s%2;
}

int main(){
	int arr[100005], j=0,fim=0;
	int n= 100000;
	double menor =1000000000;
	int zzz;
	double mov =0;
	int k =900000000; 
	
	double teste = k/(n-1);
	cout <<teste<<endl;

	mov = (n-1)*teste;

	cout <<k-mov<<endl;
/*
	for (int i = 0; i < n; i++)
	{
	
		cout << arr[i] << " ";
	}
*/
}