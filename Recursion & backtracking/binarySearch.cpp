#include<iostream>
using namespace std;
int binary(int arr[],int s,int e,int target){
    int mid=(e+s)/2;
    int ans=0;
    if(s>e){
        return -1;
    }
    if(arr[mid]==target){
        return mid;
    }
   if(arr[mid]<=target){
    return ans=binary(arr,mid+1,e,target);
   }else{
     return ans=binary(arr,s,mid-1,target);
   }
}
int main(){
  int arr[]={10,20,30,40,50,60};
  int s=0;
  int e=5;
  int target=10;
  cout<<binary(arr,s,e,target);
}