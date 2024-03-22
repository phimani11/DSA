#include<iostream>
#include<queue>
using namespace std;
 int kthLargestElement(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
     int ans=0;

    for(int i=0;i<k;i++){
        int  element =arr[i];
        pq.push(element);
    }

    for(int i=k;i<n;i++){
        int element=arr[i];
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(element);
        }
         ans=pq.top();
    }
    return ans;
 }
int main(){
    int arr[]={3,4,5,9,7,1,2};
    int n=7;
    int k=4;
    int ans=kthLargestElement(arr,n,k);
    cout<<k<<"th largest element is "<<ans<<endl; 
   
}