#include<iostream>
using namespace std;

void Extreme_array(int arr[],int size){
    int i,j;
    
    for(i=0,j=size-1;i<=j;i++,j--){
        if(i==j){
            cout<<arr[i]<<endl;
        }
        else{
        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";
        }
    }

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    cout<<"Before Array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"After Array:"<<endl;
    Extreme_array(arr,size);
}
