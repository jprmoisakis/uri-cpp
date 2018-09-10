#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int tmp, res, m = 1e9+10;
int n, ans; 
using namespace std;
int main(){
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp); 
        tmp = tmp - i > 0 ? tmp - i : 0; 
        res = tmp / n; 
        
        if (tmp % n) {
            res++; 
        }
        res = i + n * res; 
        if (m > res && res >= tmp) {
            ans = i + 1; 
            m = res; 
            cout << "ans; " << ans;

            cout<<"res : " <<res;
        }
    }
    cout << ans; 
    return 0; 

}