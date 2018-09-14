
#include <iostream>
#include <stdlib.h> 
using namespace std;


int main(){
    int n, x=0, y, rx=0, ry;
    cin >> n;
    int v[100005];
    while(x<n){
            //printf("%d", x);
            cin>>v[x];
            x++;
    }
    x = 0;
    y = 0;
   // n--;
    while(x == 0){
            //printf("cu");
        if(y%2==0){
            if((v[x]-(2*n*y)+x)>0){
                y++;
            }
            else x++;
        }
        else{
            if((v[x]-(2*n*y)-x)>0){
                y++;
            }
            else x++;
        }
    }
    ry = y;
    while(x<=n){
        //printf("fila %d\n", x);
        if(y%2==0){
            if((v[x]-(2*n*y)+x)>0){
                x++;
            }
            else{
                rx = x;
                if((v[x]-(2*n*(y-1))+x)<=0)
                    y--;
                else x++;
            }
        }
        else{
            if((v[x]-(2*n*y)-x)>0){
                x++;
            }
            else{
                rx = x;
                if((v[x]-(2*n*(y-1))+x)<=0)
                    y--;
                else x++;
            }
        }
    }
    cout <<rx;
    return 0;
}