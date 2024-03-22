#include<iostream>
using namespace std;
int missingElement(int arr[],int size){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
     int diff=0;
     int ans=-1;
     while(start<=end){
        diff=(arr[mid]-mid);
        if(diff==1){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
        mid=start+(end-start)/2;
     }
     if(ans==0){
        return end+1;
     }
     return ans+1;
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int size=9;
   int missE= missingElement(arr,size);
   cout<<"Missing element is: "<<missE;
}