#include <iostream>
using namespace std;
void find(int arr[],int size,int index,int target){
    if(index>=size){
        return;
    }
    if(arr[index]==target){
        cout<<index<<" ";
        }
        find(arr,size,index+1,target);
}
int main(){
    int arr[]={10,20,10,10,30,40};
    int size=6;
    int index=0;
    int target=10;
    find(arr,size,index,target);
}