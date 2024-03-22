#include<iostream>
using namespace std;
class Cqueue{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    Cqueue(int size){
        arr=new int [size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int data){
        if((front==0&&rear==size-1)||rear==front-1){
            cout<<"Stack is Overflow";
        }else if(rear==-1&&front==-1){
            front++;
            rear++;
            arr[rear]=data;
        }
            else if(rear==size-1&&front!=0){
              rear=0;
              arr[rear]=data;
              
        }else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        if(rear==-1&&front==-1){
           cout<<"Stack is underflow";
        }else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
           
            arr[front]=-1;
             front++;
        }
    }
 void print(){
    cout<<"Front= "<<front<<"  Rear="<<rear;
  for(int i=0;i<size;i++){
     cout<<" "<<arr[i]<<" ";
  }
  cout<<endl;
 }

};
int main(){
    Cqueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.print();
   q.pop();
    q.pop();
    q.print();

    q.push(6);
   q. print();
   q.push(7);
   q.print();
   q.push(8);

}