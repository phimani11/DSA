#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
   int mid=(s+e)/2;
   
  int lenLeft=mid-s+1;
  int lenRight=e-mid;

  int *left=new int[lenLeft];
  int *right=new int[lenRight];

  int k=s;
  for(int i=0;i<lenLeft;i++){
    left[i]=arr[k];
    k++;
  }
  
  k=mid+1;
  for(int i=0;i<lenRight;i++){
    right[i]=arr[k];
    k++;
  }

int leftIndex=0;
int rightIndex=0;
int mainarrayIndex=s;


while(lenLeft>leftIndex && lenRight>rightIndex){
   if(left[leftIndex]>right[rightIndex]){ 
     arr[mainarrayIndex]=right[rightIndex];
     rightIndex++;
     mainarrayIndex++;

   }
   else{
     arr[mainarrayIndex]=left[leftIndex];
     leftIndex++;
     mainarrayIndex++;
   }
}


    while(lenRight>rightIndex){
        arr[mainarrayIndex]=right[rightIndex];
        mainarrayIndex++;
        rightIndex++;
    }

    while (lenLeft>leftIndex)
    {
       arr[mainarrayIndex]=left[leftIndex];
       mainarrayIndex++;
       leftIndex++;
    }

    delete[] left;
    delete[] right;
    
}



void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);

}

int main(){
    int arr[]={10,60,33,67,45,90};
    int size=6;
    int s=0;
    int e=size-1;

    mergeSort(arr,s,e);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}