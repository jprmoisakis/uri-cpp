#include <bits/stdc++.h>

using namespace std;
/*
void clearQ( queue<int> &q )
{
   queue<int> empty;
   swap( q, empty );
}
void clearStk( stack<int> &s )
{
   stack<int> empty;
   swap( s, empty );
}

void clearPq( priority_queue<int> &pq )
{
   priority_queue<int> empty;
   swap( pq, empty );
}
*/
int main(){
    int n,t,x;
    queue <int> qu;
    stack <int> stk;
    priority_queue <int> pq;
    bool isPq=1, isStk = 1,isQu = 1;
    //ofstream cout("output.txt");
    while(cin >> n){
        for(int i =0; i< n; i++){
            cin >> t >> x;
            
            if(t ==1){
                qu.push(x);
                stk.push(x);
                pq.push(x);
                
            }else if(t==2){
                if(!qu.empty()){
                    if(qu.front() !=x){
                        isQu =0;
                    }
                    qu.pop();
                }else{
                    isQu=0;
                }
                
                if(!stk.empty()){
                    if(stk.top() !=x){
                        isStk =0;
                    }
                    stk.pop();
                }else{
                    isStk=0;
                }

                if(!pq.empty()){
                    if(pq.top() !=x){
                        isPq =0;
                    }
                    pq.pop();
                }else{
                    isPq =0;
                }
            }

        }
        if((isQu && isStk && isPq) || (isQu && isStk) || (isStk && isPq) || (isQu && isPq)){
            cout <<"not sure"<<endl;
        }else if(isQu && !isStk && !isPq){
            cout <<"queue" <<endl;
        }else if(!isQu && isStk && !isPq){
            cout <<"stack"<<endl;
        }else if(!isQu && !isStk && isPq){
            cout <<"priority queue" <<endl;
        }else{
            cout <<"impossible"<<endl;
        }
        isPq = isStk = isQu =1;
        //clearPq(pq);
        //clearQ(qu);
        //clearStk(stk);
        while(!pq.empty()) pq.pop();
        while(!qu.empty()) qu.pop();
        while(!stk.empty()) stk.pop();

    }


    return 0;
}