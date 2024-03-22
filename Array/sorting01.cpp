#include <iostream>
using namespace std;
void Sorting(int arr[],int size){
    int start=0;
    for(int i=0;i<size;i++){
       if(arr[i]^0==0){
        swap(arr[start],arr[i]);
        start++;
        continue;
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,0,1,1,0,1,0,0,0};
    int size=9;
    Sorting(arr,size);
}