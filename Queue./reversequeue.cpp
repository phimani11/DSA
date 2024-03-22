#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int reverse2(queue<int>&q,int ans){
    
    if(q.empty()){
        return ans;
    }
    else{
        ans=q.front();
        q.pop();
        reverse2(q,ans);
        cout<<ans<<" ";
    }
    return ans;
}

void reverse(queue <int> &q){
    stack<int> st;

    while(!q.empty()){
        int element=q.front();
        q.pop();
        st.push(element);
    }
    while(!st.empty()){
    int element =st.top();
    st.pop();
     
     q.push(element);

}
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int ans=q.front();
    reverse2(q,ans);
    // while(!q.empty()){
    //     int element=q.front();
    //     q.pop();
    //     cout<<element<<" ";  
    // }
}
