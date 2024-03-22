#include<iostream>
using namespace std;

bool check(int arr[],int size, int index){
if(index>=size){
        return true;
    }

if(arr[index]>arr[index-1]){
      bool asc = check(arr,size,index+1);
      return asc;
   }else {
    return false;
   }

}

int main(){
    int arr[]={10,20,30,50,60,70};
    int size=6;
    int index=0;
    cout<<check(arr,size,index);

}