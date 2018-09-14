
#include <iostream>

using namespace std;




int main(){
	int n,x,y, aux[10000],maior,menor,c=0,resto,res;
	cin >> n;
	for(int i =0; i<n ; i++){
		cin >> x >> y;
		
		if(x >=y){
			maior = x;
			menor = y;
		}else{
			maior = y;
			menor = x;

		}
		if(menor ==0){
				aux[c] = maior;
				c++;
				
		}else{

			resto = maior%menor;
			while(resto != 0){

					maior = menor;
					menor = resto;
					resto = maior%menor;
			}
			aux[c] = menor;
			c++;
			
				
			cout <<menor<<endl;		
		}
	}	

	
	return 0;
	
}