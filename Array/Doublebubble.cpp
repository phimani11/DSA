#include<iostream>
using namespace std;

void Pair(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<","<<arr[i]<<"  ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    Pair(arr,size);
}