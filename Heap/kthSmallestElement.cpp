#include<iostream>
#include<queue>
using namespace std;
 int kthsmallestElement(int arr[],int n,int k){
    priority_queue<int>pq;
     int ans=0;

    for(int i=0;i<k;i++){
        int  element =arr[i];
        pq.push(element);
    }

    for(int i=k;i<n;i++){
        int element=arr[i];
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(element);
        }
         ans=pq.top();
    }
    return ans;
 }
int main(){
    int arr[]={3,4,5,9,7,1,8};
    int n=7;
    int k=4;
    int ans=kthsmallestElement(arr,n,k);
    cout<<k<<"th smallest element is "<<ans<<endl; 
   
}