#include<iostream>
using namespace std;
void removeOccurence(string &str,string part){
    if(str.find(part)==string::npos){
        return ;
    }
    if(str.find(part)!=string::npos){
        str.erase(str.find(part),part.length());
        removeOccurence(str,part);
    }

   
}

int main(){
   string str="daabcbaabcbc";
   string part="abc";
   removeOccurence(str,part);
   cout<<str<<endl;
   

}