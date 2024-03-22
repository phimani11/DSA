#include<iostream>
using namespace std;
int findPivotElement(int arr[],int size){
      int s=0;
      int e=size-1;
      int mid=s+(e-s)/2;
      while(s<=e){
        
        if(s==e){
           return e;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(arr[mid]<arr[s]){
                e=mid-1;
        }else{
            s=mid+1;
            
        }
        mid=s+(e-s)/2;
        
      }
      return -1;
}
int main(){
         int arr[]={12,14,16,2,4,6,8,10};
         int size=8;
        int ans = findPivotElement(arr,size);
        cout<<"Pivot element "<<arr[ans];
}