#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;

}
void sort(int arr[],int n){
     int min=0;
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            min=i;
           if(arr[j]<arr[min]){
            min=j;
            swap(arr[min],arr[i]);
            }  
          
        }
     }
     cout<<"After sorting: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

}
int main(){

    int arr[]={22,88,99,11,44};
    
    int size=5;
    cout<<"BEFORE SORTING"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,size);
}