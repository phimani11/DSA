#include <iostream>
#include <stack>
#include<queue>
using namespace std;
void reverseAtK(queue <int> &q, int k){
    stack<int>st;
    int n=0;
    while(k!=n){
        int element =q.front();
        q.pop();
       st.push(element);
       n++;
    }
    
    while(!st.empty()){
      int element=st.top();
      st.pop();
      q.push(element);
    }
     for(int i=0;i<(q.size()-k);i++){
        int element= q.front();
        q.pop();
        q.push(element);

    }
   
}
int main(){
   queue<int> q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   reverseAtK(q,3);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
