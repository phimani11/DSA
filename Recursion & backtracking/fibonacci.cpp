#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){
    return 0;
    }
    if(n==1){
    return 1;
    }
   
  int fib = fibonacci(n-1)+fibonacci(n-2);
  return fib;

}
      
int main(){
    int n=0;
    cout<<"Enter number for fibonacci series: ";
    cin>>n;
    cout<<fibonacci(n);
    
}