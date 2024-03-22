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
   int LastOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
  
    return ans;
   }
   int TotalOccurence(int arr[],int size, int target){
    int frist=fristOccurence(arr,size,target);
    int last =LastOccurence(arr,size,target);
    int total =(last-frist)+1;
    return total;
   }

int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int totalO;
    int size=8;
    cout<<"Enter the element to find there frist occurence: ";
    cin>>totalO;
   int finalAns=TotalOccurence(arr,size,totalO);
   cout<<"Total occurence "<<finalAns<<endl;
} 