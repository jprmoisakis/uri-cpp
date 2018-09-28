#include <bits/stdc++.h>


using namespace std;

int main(){
	//ifstream cin("input.txt");

	//ofstream cout("output.txt");
	stringstream stream;
	//map <string,int> mp;
	vector<int> vec(5);
	multiset <string> ms;
	vector <string> strs ;

	int n,aux,cont;
	while(1){
		cin >> n;
		if(n==0){break;}
		for(int i =0;i<n;i++){
			cin >>vec[0]>>vec[1]>>vec[2]>>vec[3]>>vec[4];
			sort(vec.begin(),vec.end());

			stream <<vec[0]<<vec[1]<<vec[2]<<vec[3]<<vec[4];
			
			ms.insert(stream.str());
			strs.push_back(stream.str());
			stream.str("");
		}

		int maior=0;
		int acum =0;
		for(int i=0; i<n;i++){
			//cout<<strs[i]<< endl;

			cont = ms.count(strs[i]);
				
			if(cont >0){
				ms.erase(ms.find(strs[i]));
			}
			
			if (cont > maior){
				maior =cont;
				acum = cont;
			}else if(cont == maior){
				acum = acum + cont;
			}
		}
		strs.clear();
		ms.clear();
		cout << acum <<endl;
	}





}