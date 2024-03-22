#include<iostream>
#include<queue>
using namespace std;


int main(){
   queue<int> q;
   string str="ababc";
    int freq[26]={0};
    for(int i=0;i<str.size();i++){
         char ch=str[i];
         freq[ch-'a']++;
         q.push(ch);
    
    
         while(!q.empty()){
           char frontelement=q.front();
           if(freq[frontelement-'a']>1){
                q.pop();
           }else{
            cout<<(char)q.front()<<"->";
            break;
           }
        }
        if(q.empty()){
            cout<<"#"<<"->";
        }

    }
}