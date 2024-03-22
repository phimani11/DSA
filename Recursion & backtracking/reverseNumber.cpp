#include<iostream>
using namespace std;
void reverse(int n){
    if(n==0){
        return ;
    }
    int digit= n%10;
    int num=n/10;
    
  cout<<digit; 
  reverse(num);
 

}

int main(){
    int n=4251;
    reverse(n);
}