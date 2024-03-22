#include<iostream>
using namespace std;
class Stack{
      public:
      int* arr;
      int size;
      int top;
      
      Stack(int size){
            arr=new int [size];
            this->size=size;
            this->top=-1;
      } 
      
      void push(int data){
            if(top==size-1){
                  cout<<"Stack is Overflow "<<endl;
            }
            else{
                  top++;
                  arr[top]=data;
            }
      }
      void pop(){
            if(top==-1){
                  cout<<"Stack is Underflow "<<endl;
            }else{
            top--;
            }
      } 

      bool isEmpty(){
            if(top==-1){
                  return true; 
            }
            else{
                  return false;
            }
      }
      int sizeStack(){
            return top+1;
      }

      int getTop(){
            if(top==-1){
                  cout<<"Stack is empty "<<endl;
            }else{
                  return arr[top];
            }
      }

      void printStack(){
            for(int i=0;i<sizeStack();i++){
              cout<<arr[i]<<" ";
            }
            cout<<endl;
      }


      

};
  


int main(){
      Stack st(5);

      st.push(10);
      st.push(20);
     cout<< st.sizeStack()<<endl;
     cout<< st.getTop()<<endl;
      st.printStack();
      st.pop();
      cout<<st.getTop()<<endl;
      

}