#include<iostream>
using namespace std;

class Queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;
    Queue(int size){
        arr= new int[size];
        this->size=size;
        front=-1;
        rear=-1;
  }
  void push(int data){
     if(front==-1 && rear ==-1){
          front++;
          rear++;
          arr[rear]=data;
     }else if(rear==size-1){
        cout<<" Queue is Overflow "<<endl;
     }else{
        rear++;
         arr[rear]=data;
     }
  }
  void pop(){
    if(front==-1&&rear==-1){
        cout<<" Queue is UnderFlow "<<endl;
    }else if(front==rear){
        arr[rear]=-1;
        front=-1;
        rear=-1;
    }else{
       
       arr[front]=-1;
       front++;
    }
  }
  int Getsize(){
    return rear-front+1;
  }
  bool empty(){
        if(front==-1&&rear==-1){
            return true;
        }else{
            return false;
        }
  }
 
 void print(){
  for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
  }
  cout<<endl;
 }

 

};
int main(){

    Queue q(5);
    q.print();
    
    q.push(1);
    q.push(2);
    
    q.print();

    q.push(3);
    q.push(8);
    q.push(7);

    q.print();

    q.pop();

    q.print();

    


}

