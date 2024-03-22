#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str="abbcbaddcbabbbaae";
    string part="cba";
    while(str.find(part)!=string::npos){
        str.erase(str.find(part),part.length());
    }
    cout<<str<<endl;
}