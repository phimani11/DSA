#include<iostream>
using namespace std;
   int fristOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
  
    return ans;
   }
int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int fristO;
    int size=8;
    cout<<"Enter the element to find there frist occurence: ";
    cin>>fristO;
   int finalAns= fristOccurence(arr,size,fristO);
   cout<<"Element is found "<<finalAns+1<<"at this position"<<endl;
} 