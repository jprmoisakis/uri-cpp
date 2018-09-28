#include <bits/stdc++.h>
using namespace std;

int main(){
	//ifstream cin("input.txt");

	//ofstream cout("output.txt");
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	std::vector<int> A,B,C,D;
	int a,b,c,d,n,l,r,count=0;
	cin >>n;
	for(int i = 0; i < n;i++){
		cin >> a >> b >>c >>d;
		A.push_back(a);
		B.push_back(b);
		C.push_back(c);
		D.push_back(d);
	}
	//cout << "sdasdasdfim" <<endl;

	//sort(A.begin(), A.end());
	//sort(B.begin(), B.end());
	//sort(C.begin(), C.end());
	//sort(D.begin(), D.end());
/*
	for (int i = 0; i < n; i++)
	{
		cout<<A[i] <<" "<<B[i] <<" "<<C[i] <<" "<<D[i]<<endl;
	}
	//cout << "sdasdasdfim" <<endl;

*/	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				for (int l = 0; l < n; l++){
					if(A[i] +B[j] +C[k] +D[l]== 0){
						count++;

					}
	
				}		
			}
		}
	}

	/*
	for(int i =0; i<n;i++){
		for(int j = 0; j<n;j++){
			l=j;
			r=n-1;
			while(l<r){

				if(A[i] +B[j] +C[l] +D[r] == 0){
					cout << "fim" <<endl;

					count++;
					l++; 
					r--;
				}else if(A[i] +B[j] +C[l] +D[r]<0){
					l++;
				}else{
					r++;
				}
			}



		}
	}
	*/
	//cout << "fim" <<endl;

	cout << count <<endl;
	return 0;
}