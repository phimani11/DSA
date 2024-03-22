#include<iostream>
using namespace std;
int paintPoll(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+k*(k-1);
    }
    int ans=(k-1)*(paintPoll(n-2,k)+paintPoll(n-1,k));
    return ans;
}
int main(){

    /*n is for number of poll*/
    /*k is for number of colours*/
    int n=3;
    int k=3;
    cout<<paintPoll(n,k)<<endl;
}