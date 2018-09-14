#include <iostream>
#include <math.h>
using namespace std;
//900000000
//2147483647


int main(){
	int n, arr[100005], j=0;
	double aux=0;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++){
		//cout << i <<"=1"<<endl;

		if(arr[i] - aux <= 0){
			cout <<i +1<<"" << endl;
			break;
		}
		//cout << aux;
		if(i == n-1){
			for (j = i; j >	0;j--){
				//cout << aux<<"aux";			
				if (arr[j] - aux <= 0){
					cout <<j +1 <<""<< endl;
					j = -5;
					break;
				}
				aux = aux +1;
				//cout <<"incrementa aux b" << aux<< endl;

			}
			//cout << j << "= j"<<endl;
			if(j ==-5){
				//cout << "pqp " << i;

				break;
			}

			i=-1;
			//cout << i <<"=teste"<<endl;

		}else{

			aux = aux + 1;
			//cout <<"incrementa aux a" << aux<< endl;


		}

	}

/*
	for (int i = 0; i < n; i++)
	{
	
		cout << arr[i] << " ";
	}
*/
}