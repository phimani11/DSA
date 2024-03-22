#include<iostream>
using namespace std;
void reverse(string str, int size,int index){
    if(index>=size){
        return ;
    }
   
    reverse(str,size,index+1);
     char eachChar=str[index];
     cout<<eachChar;
     
    
}

int main(){
    string str="babbar";
    int size=str.length();
    int index=0;
    reverse(str,size,index);
    cout<<endl;
}