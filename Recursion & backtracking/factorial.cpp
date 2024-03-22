#include <iostream>
using namespace std;
int fact(int n){
     if(n==0||n==1)
     return n;

     int recAns=fact(n-1);
     int finalAns=n*recAns;
     return finalAns;
}
int main(){
    int n=0;
    cout<<"Enter the number  for Factorial: ";
    cin>>n;
    cout<<"Ans= "<<fact(n)<<endl;

}