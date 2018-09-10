#include <iostream>


using namespace std;

bool isPalindrome(char str[], int n){
    int low = 0, high =n-1;
    bool palindrome = true;
    while(low < high){
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
