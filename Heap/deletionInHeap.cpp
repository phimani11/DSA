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
   
int deleteInHeap(){
    int answer=arr[1];
    arr[1]=arr[size];
    size--;
    int i=1;

    int leftIndex=2*i;
    int rightIndex=2*i+1;
    int largeIndex=i;

while(i<size){
    
    if(leftIndex<=size&&arr[largeIndex]<arr[leftIndex]){
        largeIndex=leftIndex;
   }
   if(rightIndex<=size&&arr[largeIndex]<arr[rightIndex]){
    largeIndex=rightIndex;
   }
   if(largeIndex==i){
     break;
   }else{
     swap(arr[largeIndex],arr[i]);
     i=largeIndex;
   }
   return answer;
}

}
   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }



};
int main(){

    Heap h(20);
    h.insertion(10);
    h.insertion(20);
    h.insertion(30);
    h.insertion(50);

    h.print();
    h.deleteInHeap();
    h.print();

}
