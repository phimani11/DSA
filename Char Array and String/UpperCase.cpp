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
void upperCase(char ch[],int n){
    int i=0;
    while(ch[i]!='\0'){
       if(ch[i]>='a'&&ch[i]<='z'){
            ch[i]=ch[i]-32;
       }
        else{
        ch[i]=ch[i];
       }
       i++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int len=findLength(ch);
    cout<<len<<endl;
    upperCase(ch,len);
    cout<<ch;
}