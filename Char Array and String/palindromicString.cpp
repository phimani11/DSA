#include<iostream>
#include<string.h>
using namespace std;
int Palindrome(string str,int i,int j){
      int count=0;
       while(str[i]==str[j]&&i>=0&&j<str.length()){
            count++;
            i++;
            j--;
       }
    return count;
}
int countOfPalindrome(string str){
    int center;
    int ans1, ans2, finalans=0;

   
    
      for(center=0;center<=str.length();center++){
       ans1=  Palindrome(str,center,center);
       ans2= Palindrome(str,center,center+1);

         finalans=finalans+ ans1+ans2;
}
return finalans;
}
int main(){
    string str;
    cout<<"Enter The string:  ";
    cin>>str;
    cout<<countOfPalindrome(str);
}
