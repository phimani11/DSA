#include <iostream>
#include <limits.h>
using namespace std;

int Min(int arr[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MININUM NUMBER IS: "<<min<<endl;

}

int main(){
    int arr[]={1,2,-4,8,9,3,2};
    int size=7;
     Min(arr,size);
}