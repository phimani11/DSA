#include<iostream>
using namespace std;
int count(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int ans=(n-1)*(count(n-1)+count(n-2));
    return ans;
}
int main(){
    int n=4;
    cout<<count(n)<<endl;
}