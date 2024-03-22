#include<iostream>
using namespace std;

void  Reverse_array(int arr[],int size){
    for(int i=0,j=size-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
     int arr[]={1,2,3,4,5,6,7};
     int n=7;
     cout<<"Before Array: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<"After Array: "<<endl;
      Reverse_array(arr,n);
}