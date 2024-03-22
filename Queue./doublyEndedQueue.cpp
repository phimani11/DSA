#include<iostream>
using namespace std;
class Deque{
    public:
    int*arr;
    int size;
    int front;
    int rear;
    Deque(int size){
        arr= new int[size];
        this->size=size;
        front=-1;
        rear=-1;
        }
    void push_back(int data){
        if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[rear]=data;
        }else if(front==-1&&rear==size-1||rear==front-1){
           cout<<"Queue is full";
        }else if(rear==size-1&& front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void push_front(int data)
    {
        if(front==-1&&rear==-1){
            front++;
            rear++;
            arr[front]=data;
         }else if(front==0&&rear==size-1||rear==front-1){
              cout<<"stack is overflow";
         }else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=data;
         }else{
            front--;
            arr[front]=data;

         }
          } 
     void pop_front(){
         if(front==-1&&rear==-1){
            cout<<"stack is UnderFlow";
         }else if(front==rear){
            arr[front]=0;
            front=-1;
            rear=-1;
         }
            else if(front==size-1){
            arr[front]=-1;
            front=0;
         }else{
            arr[front]=-1;
            front++;
         }
     } 
     void pop_back(){
        if(front==-1&&rear==-1){
            cout<<"stack is Underflow";
        }else if(front==rear){
                 arr[front]=-1;
                 front=-1;
                 rear=-1;
            }else if(rear==0){
           arr[rear]=-1;
           rear=size-1;
        }else{
            arr[rear]=-1;
            rear--;
        }
     }   
};
int main(){
    Deque d(5);
    d.push_back(101);
    d.push_front(120);
    


    

}