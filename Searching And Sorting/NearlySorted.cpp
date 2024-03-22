#include<iostream>
using namespace std;
int find(int arr[],int size, int target){
    int s=0;
    int e=size;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid+1]==target){
            return mid+1;
        }else if(arr[mid-1]==target){
            return mid-1;
        }else if(arr[mid]>target){
            e=mid+2;
        }else{
            s=mid+2;
        }
       mid=s+(e-s)/2;
    }
    return mid;
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int size=7;
    int target;
    cout<<"Enter the element for searching ";
    cin>>target;
    int ans=find(arr,size,target);
    cout<<"Element found at "<<ans<<" index";
}