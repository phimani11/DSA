#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&st,int&element){
    if(st.empty()){
      st.push(element);
      return;
    }
    int size=st.size();
    int temp=st.top();
    st.pop();
    
    solve(st,element);

    st.push(temp);
}

void reverse(stack<int>&st){
    if(st.empty()){
        return ;
    }
    int temp=st.top();
    st.pop();

    reverse(st);

    solve(st,temp);

}
int main(){
     stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
  
  reverse(st);

   while(!st.empty()){
      cout<<st.top()<<" ";
      st.pop();
   }
   cout<<endl;
}

