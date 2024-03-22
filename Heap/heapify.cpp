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

  void insertion(int val){
      if(size==capicity){
        cout<<"Heap is overflow"<<endl;
      }

      size++;
      int index=size;
      arr[index]=val;

      while(index>1){
        int parentindex=(index/2);
        if(arr[parentindex]<arr[index]){
            swap(arr[parentindex],arr[index]);
        }
        else{
              break;
        }
      }
  }
   
   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
   void heapify(int *arr,int n,int i){
    int leftIndex=2*i;
    int rightIndex=2*1+1;
    int largeIndex=i;

    if(leftIndex<=n&& arr[largeIndex]<arr[leftIndex]){
        arr[largeIndex]=arr[leftIndex];
    }
    if(rightIndex<=n&&arr[largeIndex]<arr[rightIndex]){
        arr[largeIndex]=arr[rightIndex];
    }

    if(i!=largeIndex){
        swap(arr[i],arr[largeIndex]);
        i=largeIndex;

        heapify(arr,n,i);
    }

   }

};
int main(){

    Heap h(20);
    h.insertion(10);
    h.insertion(20);
    h.insertion(30);
    h.insertion(50);

    h.print();

}
