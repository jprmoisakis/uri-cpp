Se for necessário ler uma linha inteira da entrada ao invés de uma única
palavra, o jeito de fazer isso em C++ é, primeiro declara a "string str" e depois getline(cin, str); Se na questão for necessario ler multiplos casos testes até o fim da entrada é possivel utilizar while(getline(cin, str)) que ele executará o 
while para cada leitura bem sucedida,
encerrando quando chegar ao fim de arquivo.
Se for necessário printar "exatamente X casas decimais" ou "ter uma precisão de pelo menos 10^-6"
 (oq implicaria printar pelo menos 6 casas decimais) você pode definir isso no cout utilizando "cout << fixed << setprecision(X);" 
 no inicio do main, definindo a quantidade de casas decimais a serem printadas.
 
#include <iostream>
#include <string>
#include <algorithm>
//questão do substringsort
//GNU G++11 5.1.0
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
/////////////questão da fila copa

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
//////questão fatorial

#include <iostream>

using namespace std;

long long fatorial(int n){
	long long fatorial = n;
	for (int i = 1; i < n; i++){
		fatorial = fatorial * (n-i);
		//cout << i<<endl;

	}
	if(n==0){
		fatorial = 1;
	}
	return fatorial;
}
int main(){
	int x, y;
	while(cin >> x >> y){
		cout <<fatorial(x) + fatorial(y)<<endl;
	}

}
//QUESTÃO DO PALINDROMO APROXIMADO
#include <iostream>
using namespace std;
bool isPalindrome(char str[], int n){
    int low = 0, high =n-1;
    bool palindrome = true;
    while(low < high){
		//PARA PALINDROMO NORMAL TROCAR ISSO POR str[low] != str[high]
        if(str[low] - 1 != str[high] -1 && str[low] + 1 != str[high] -1 && str[low] - 1 != str[high] +1 && str[low] + 1 != str[high] +1 ){
            palindrome = false;
            break;
        }else{
            low++;
            high--;
        }
    }
    return palindrome;
}
int main(){

    int t,n;
    char str[10000];
    bool results[10000];
    bool palindrome = true;
    int aux;
    cin >>t;
    for(int i = 0; i<t; i++){
        cin >> n;
        int low = 0,high = n-1;

        for(int j = 0; j < n; j++){
            cin >> str[j];
        }
        
        results[i] = isPalindrome(str,n);
        //cout << isPalindrome(str,n) << endl;
    }

    for(int i = 0; i<t; i++){
        if(results[i] == 1){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;            
        }
    }

    return 0;
}
//////crivo
#include <iostream>
#include <fstream>
#include <bitset> 
#include <vector>
#include <cmath>
#include <cstdlib>
#define MAX 1000001
using namespace std;
int main(){

  bitset<MAX> bs; //vetor de bits
  vector <int> primos; //vetor de primos
  int limite;
  ofstream outfile ("primos2.txt");

  bs.reset(); //seta todos os numeros para 0 
  bs.flip();  //seta todos os numeros para 1
  
  cout << "Inicio do Crivo" << endl;
  limite = (int)sqrt(MAX);

  for (int i = 2; i <= limite; i++){ 
    if (bs.test((size_t)i)) {
      for (int j = i * i; j < MAX; j += i) 
        bs.set((size_t)j, false); 
    }
  }
  
  for(int i=2; i< MAX; i++)
    if (bs.test((size_t)i)){
      outfile << i << endl;
      primos.push_back(i);
    } 
  system("PAUSE");
}
//////MERGESORT
##include <iomanip>

/* C program for Merge Sort */
#include<stdlib.h> 
#include<stdio.h> 
  
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Given array is \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\nSorted array is \n"); 
    printArray(arr, arr_size); 
    return 0; 
} 


///QUICKSORT

/* C implementation QuickSort */
#include<stdio.h> 
  
// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1); 
    printf("Sorted array: n"); 
    printArray(arr, n); 
    return 0; 
} 


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000001
#define NUM 78498 
 
int main(){
  int i,j;
  int limite;
  char ehprimo[MAX];
  int cont=0;
  int primos[NUM];
  FILE *fp;
  fp = fopen("primos.txt","wt");

  for(i=2;i<MAX;i++) ehprimo[i]=1;
  limite = (int)sqrt(MAX);
  for(i=2;i<limite;i++){
    if(ehprimo[i]){
      for(j=i*i;j<MAX;j=j+i)
        ehprimo[j] = 0;
    }
  }

  for(i=2;i<MAX;i++){
    if(ehprimo[i]){
      fprintf(fp,"%d %d\n",cont,i);
      primos[cont]=i;
      cont++;
    }
  }
  printf("%d\n",cont);   
  system("PAUSE");

}