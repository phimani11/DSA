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
bool panlindrome(char ch[],int len){
    int s=0;
    int e=len-1;
    bool flag=true;
    while(s<=e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }else{
            flag=false;
            break;
        }
    }
    return flag;

}
int main(){
    char ch[100];
    cin>>ch;
    int len=findLength(ch);
    bool flag = panlindrome(ch,len);
    if(flag==true){
        cout<<"Yes it is palindrome  "<<ch;
    }
    else{
        cout<<"No it is not paliindrome "<<ch;
    }
}