#include <iostream>
#include <string>
#include <algorithm>
//questão do substringsort
using namespace std;
/*ex Input
	5
	a
	aba
	abacaba
	ba
	aba

	Output
	
	YES
	a
	ba
	aba
	aba
	abacaba
*/

bool isSubtring(string a, string b){ //checa se é substring
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
void bbSort(string arr[], int n){//bbsort em de strings

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
	string sorted[105]= arr;
	sort(sorted,sorted +n);//ordena array de strings em ordem alfabetica
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

////Questão MDC
#include <iostream>
using namespace std;
/*
input
3
8 12
9 27
259 111
output
4
9
37
*/
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

/////////////Questão sort primeira string a partir de outra  
/*Input

6
abcdef
abdfec

Output
4
3 5 4 5 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>    // std::swap

using namespace std;

int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s;
  cin >> t;
  if (s == t) {
    cout << 0 << "\n";
    return 0;
  }
  vector<int> moves;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      int index = -1;
      for (int j = i + 1; j < n; j++) {
        if (s[j] == t[i]) {
          index = j;
          break;
        }
      }
      if (index == -1) {
        cout << -1 << "\n";
        return 0;
      }
      for (int j = index; j > i; j--) {
        swap(s[j], s[j - 1]);
        moves.push_back(j);
      }
    }
  }
  cout << moves.size() << "\n";
  for (int i = 0; i < moves.size(); i++) {
    cout << moves[i] << " ";
  }
  cout << "\n";
  return 0;
}






