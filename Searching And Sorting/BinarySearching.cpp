#include<iostream>
using namespace std;

void searching(int arr[],int size,int search){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    bool found=false;
    int count=0;
    while(start<end){
        if(arr[mid]==search){
            found=true;
           
            break;
        }else if(arr[mid]<search){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=(start+end)/2;
        count++;
    }
    if(found==true){
        cout<<"Element is found "<<count<<"at position"<<endl;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int target;
    int size=7;
     cout<<"Enter the element for searching: ";
     cin>>target;
     searching(arr,size,target);
     return 0; 
}