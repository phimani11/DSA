#include<iostream>
using namespace std;
void subse(string str, int index, string output){
    if(index>=str.length()){
        cout<<"->"<<output<<endl;
        return;
    }
    
    char ch=str[index];

    subse(str, index+1,output);
     
    output.push_back(ch);

    subse(str,index+1,output);

}
int main(){
     string str="abc";
     int index=0;
     string output="";
     subse(str,index,output);

}