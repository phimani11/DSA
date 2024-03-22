
#include<iostream>
using namespace std;
class Heap{
  public:
  int *arr;
  int capicity;
  int size;

  Heap(int capicity){
    this->arr=new int[capicity];
    this->capicity=capicity;
    this->size=0;
      
  }

  
};

void heapify(int *arr,int n,int i){
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    int largeIndex=i;

    if(leftIndex<=n&& arr[largeIndex]<arr[leftIndex]){
        largeIndex=leftIndex;
    }
    if(rightIndex<=n&&arr[largeIndex]<arr[rightIndex]){
        largeIndex=rightIndex;
    }

    if(i!=largeIndex){
        swap(arr[i],arr[largeIndex]);
        i=largeIndex;

        heapify(arr,n,i);
    }

   }
  void buildHeap(int *arr, int n){
     for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
     }
  }

  void heapSort(int *arr,int n){
  
    while(n!=1){
         swap(arr[1],arr[n]);
         n--;
         heapify(arr,n,1);
    }
  }
int main(){

int arr[]={-1,5,10,15,20,25,12};
int n=6;

 buildHeap(arr,6);
cout<<"printing the heap "<<endl;
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}
 heapSort(arr,n);
   cout<<"printing the heap "<<endl;
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}


}
