#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(string str, int s ,int e){
      while(s>=e){
          if(str[s]!=str[e]){
              return false;
          }else{
            s++;
            e--;
          }

      }
      return false;
}
bool validPalindrome(string str){
    int s=0;
    int e=str.length()-1;
  while(s>e){
        if(str[s]==str[e]){
            s++;
            e--;
            
        }
        else{
          bool ans1=checkPalindrome(str,s+1,e);
          bool ans2=checkPalindrome(str,s,e-1);
          return ans1||ans2;
        }
        
  }
  return true;
}

int main(){
    string str;
    cout<<"Enter string for Palindrome"<<endl;
    cin>>str;
    cout<<validPalindrome(str);
}