#include <iostream>
#include <cmath>

using namespace std;
int main(){

	int n,x0,y0,r0,y1,x1,r1;
	double distance;
	cin >> n;

	for(int i = 0; i<n;i++){
		cin >> x0 >> y0 >> r0 >> x1>> y1 >> r1;

		int maior = r0;
		int menor =r1;

		if(maior<r1){
			maior = r1;
			menor = r0;
		}
		distance = sqrt( pow((x1-x0),2) + pow((y1-y0),2));
		if(maior >= ( distance + menor)){
			if(maior == ( distance + menor)){
				cout << "E" <<endl;
			}else{
				cout << "I" <<endl;

			}
		
		}else {
				cout<<"O"<<endl;
		}


	}
	return 0;
}