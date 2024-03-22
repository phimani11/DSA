#include<iostream>
using namespace std;
int peakElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=0;
    while(s<e){
        mid =s+(e-s)/2;
        if(arr[mid]<arr[mid +1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return e;

}
int main(){
    int arr[]={10,20,50,40,30};
    int size=5;
    int ans=peakElement(arr,size);
    cout<<"peak element "<< arr[ans]<<endl;
}