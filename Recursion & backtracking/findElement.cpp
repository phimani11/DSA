#include<iostream>
using namespace std;

int findElement(int arr[],int size,int index,int target){
    if(index>=size){
        return 0 ;
    }
       
    if(arr[index]==target){
        return index;
    }
    int ans=findElement(arr,size,index+1,target);
    
    return ans;

}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;

    cout<<findElement(arr,size,index,target);
}