#include<iostream>
using namespace std;
int oddOccurence(int arr[],int size){
    int s=0;
    int e=size;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        else if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }else if(mid%2==1){
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    int arr[]={10,10,2,2,5,5,2,5,5,20,20,11,11,10,10};
    int size=15;
    int ans=oddOccurence(arr,size);
    cout<<"Odd Occurence: "<<arr[ans]<<endl;
}