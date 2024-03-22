#include<iostream>
using namespace std;
int Binarysearch(int arr[],int s,int e,int t){
     int  mid=s+(e-s)/2;
      if(arr[e]==t){
        return e;
      }else if(arr[mid]>t) {
           s=mid+1;
      }
      else if(arr[mid]==t){
           return mid;
      }
           else{
            e=mid;
    }
           
           
}
int expotentialSearch(int arr[],int n,int x){
    int i=1;
    if(arr[0]==x) return 0;
     while(i<n&&arr[i]<=x){
        i=i*2;
     }
   int  ans=Binarysearch(arr,i/2,i,x);
     return ans;
}
int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int size=10;
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int ans=expotentialSearch(arr,size,target);
   cout<<"TARGET FOUND AT "<<ans<<" position"<<endl;
    
}