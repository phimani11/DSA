#include<iostream>
using namespace std;
bool check(string str,int s,int e,int size){
    int ans=0;
    int mid=size/2;
    if(size%2==0&&(mid+1)==e){
       if(str[mid]==str[e]){
        ans=true;
        return true;
       }
    }
    if(s==e){
        if(str[s]==str[e]){
        ans=true;
        return ans ;
        }
    }
    if(str[s]==str[e]){
       ans=check(str,s+1,e-1,size);
       return ans;
    }else{
        ans=false;
        return ans;
    }

}
int main(){
    string str="madsam";
    int size=str.length();
    int s=0;
    int e=size-1;
    cout<<check(str,s,e,size)<<endl;

}