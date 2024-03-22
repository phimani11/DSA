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
void reverseString(char ch[],int size){
    int s=0;
    int e=size-1;
    while(s!=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<"After reverse: ";
    cout<<ch<<endl;

}
int main(){
    char ch[100];
    
    cin.getline(ch,100);
        cout<<"Before Reverse: ";
        cout<<ch<<endl;
        int len=findLength(ch);
        reverseString(ch,len);

}