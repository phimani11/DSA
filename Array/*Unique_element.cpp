#include<iostream>
using namespace std;

void Unique_element(int arr[],int size){
    int ans;
    for(int i=0;i<size;i++){
       for(int j=1;j<size;j++){
        if(arr[i]^arr[j]==0){
            continue;
        }
        else{
            cout<<"Element is found "<<arr[i];
            break;
        }

       }
      
}
}
int main(){
    int arr[]={10,20,30,13,10,20,30};
    int n =7;
    Unique_element(arr,n);
}