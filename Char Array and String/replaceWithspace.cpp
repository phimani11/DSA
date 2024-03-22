#include<iostream>
using namespace std;
int findLength(char ch[]){
    int i=0;
    int count=0;
    while(ch[i]!='\0'){
        count++;
        i++;
        }
        return count;
}
void replaceSpace(char ch[],int n){
    int i=0;

      while(i!='\0'){
        char curr=ch[i];
        if(curr== ' '){
           ch[i]='@';
        }
        i++;
      }
      cout<<ch;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findLength(ch);
    cout<<len;
    replaceSpace(ch,len);
   

}