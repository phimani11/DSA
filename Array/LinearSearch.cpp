#include <iostream>
using namespace std;
void LinearSearch(int arr[], int size,int target){
    
       for(int i=0;i<size;i++){
        if(arr[i]==target){
          cout<<"Element is found at "<<i+1 <<" position" ;   
        }
       }
}

int main()
{
    int arr[]={21,11,78,88,23,34,8};
    int size =7;
    int search;
    
    cout<<"Enter the number for searching ";
    cin>>search;
     LinearSearch(arr,size,search);
     return 0;
  
}

