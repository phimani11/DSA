#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string word;
   cin>>word;
   int len=word.length();
   string temp;
   int i=1;
   int count=0;
   temp.push_back(word[0]);
   while(i<=len-1){
      if(temp[count]==word[i]){
        temp.pop_back();
        count--;
      }else{
        temp.push_back(word[i]);
        count++;
      }
      i++;
   }
   cout<<temp<<endl;
}