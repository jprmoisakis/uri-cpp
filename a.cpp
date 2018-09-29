#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

//
int main(){

	//vector <int> vec;
	int vec[100000];
	int n,auxx;

	scanf("%d",&n);

	for(int i =0; i <n;i++){

		scanf("%d",&auxx);
		vec[i] = auxx;
	}
	bool res=0;

	int j=n-1, k=0;
	int i;
	sort(vec,vec+n);
	for(k =n-1; k >=0; k--){
		i = 0;
		j=k-1;
		while(i<j){
			if(vec[i] +vec[j] > vec[k] && vec[i] +vec[k] > vec[j] && vec[j] +vec[k] > vec[i]){
				res=1;
				//cout << vec[k] << vec[i] <<vec[j] <<endl;
				break;
			}else if(vec[j] +vec[k] > vec[i]){
				i++;
			}else{
				j--;
			}
		}
		if(res==1){
			break;
		}
	}
		
	if(res){
	
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	/*for(int i =0; i <n;i++){

		cout <<vec[i];
		
	}
	*/

	return 0;
}
