#include<iostream>
#include<stack>
using namespace std;
void sorting(stack<int>&st,int element){
    if(st.empty()||element>st.top()){
        st.push(element);
        return;
    }

    int temp=st.top();
    st.pop();

    sorting(st,element);
    
    st.push(temp);

}
void stackSort(stack<int>&st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    
    stackSort(st);
      
    sorting(st,temp);
}
int main(){
    stack<int> st;
   st.push(2);
   st.push(21);
   st.push(99);
   st.push(15);
   st.push(89);
   st.push(62);

   stackSort(st);

 while(!st.empty()){
      cout<<st.top()<<" ";
      st.pop();
   }
   cout<<endl;

}