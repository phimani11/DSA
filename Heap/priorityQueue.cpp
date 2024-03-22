#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
 priority_queue<int> pq;
 pq.push(100);
 pq.push(20);
 pq.push(80);
 pq.push(90);

 cout<<pq.top()<<endl;
 pq.pop();

 cout<<pq.top()<<endl;


 //for the min heap
 priority_queue<int,vector<int>,greater<int>>pq2;
 pq2.push(100);
 pq2.push(80);
 pq2.push(70);
 pq2.push(60);

 cout<<pq2.top()<<endl;
 pq.pop();

 cout<<pq.top()<<endl;


}