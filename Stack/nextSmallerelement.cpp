#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextsmaller(int*arr,int size){
    stack<int>st;
    st.push(-1);
    vector<int>ans;
    for(int i=size-1;i>=0;i--){
        int curr=arr[i];
            while(st.top()>=curr){
                st.pop();
            }
            ans.push_back(st.top());
            st.push(curr);
    }
    return ans;
}
int main(){
  int arr []={1,8,3,4,2};
  int size=5;
  vector<int>ans;
  ans=nextsmaller(arr,size);
  for(auto i: ans){
    cout<<i<<" ";
  }
  cout<<endl;

}