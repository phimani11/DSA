#include<iostream>
using namespace std;


void permutation(string &str, int index){
    int j=0;
    if(index>=str.length()){
        cout<<str<<" ";
        return ;
    }
    for(int j=index;j<str.length();j++){
        swap(str[j],str[index]);

        permutation(str,index+1);

        swap(str[j],str[index]);

    }

}
int main(){
    string str="abc";
    int index=0;
    permutation(str,index);
}