#include<iostream>
using namespace std;
void find(string str,int index,int target){
    int len=str.length();
    if(index>=len){
        return ;
    }
    if(str[index]==target){
        cout<<index<<" ";
    }
    find(str,index+1,target);
}
int main(){
    string str="Babbar";
   int index=0;
   char target='a';
   find (str,index,target);
}