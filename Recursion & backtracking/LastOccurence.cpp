#include<iostream>
using namespace std;
int lastOccurence(string str , int index,char target,int size){
    char eachChar=str[index];
    if(eachChar==target){
         return index;
    }
    
    return lastOccurence(str,index-1,target,size);

}
int main(){
    string str="babbar";
    char target='b';
    int size=str.length();
    int index=size-1;
   cout<<lastOccurence(str,index,target,size)<<endl;
}