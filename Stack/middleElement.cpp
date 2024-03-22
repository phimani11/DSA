#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st,int&pos,int&ans){
      if(pos==1){
        ans=st.top();
        return ;
      }
        int temp=st.top();
        st.pop();
        pos--;

        solve(st,pos,ans);
        
        st.push(temp);
    
}

void getmiddleElement(stack<int>&st){
    int size=st.size();
    int ans=-1;
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
    int pos=0;
    if(size&1){
        pos=(size/2)+1;
    }else{
        pos=(size/2);
    }

    solve(st,pos,ans);
    cout<<ans<<endl;
    }
}


int main(){
   stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);

   getmiddleElement(st);


   }