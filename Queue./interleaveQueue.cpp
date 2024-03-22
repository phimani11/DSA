#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void interQueue(queue<int>&frist){
    queue<int>second;
    int n=frist.size()/2;
    for(int i=0;i<n;i++){
             int element= frist.front();
             frist.pop();
             second.push(element);
    }
    
    for(int i=0;i<n;i++){
        int element=second.front();
        second.pop();
        frist.push(element);

        element=frist.front();
        frist.pop();
        frist.push(element);
    }

}
int main(){
    queue <int> q;
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
        q.push(50);
         q.push(60);
          q.push(70);

          interQueue(q);

          while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }}