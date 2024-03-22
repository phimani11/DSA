#include<iostream>
using namespace std;
int sum(int n){
   if(n==0)
   return 0;
   if(n==1)
   return 1;

   int ans=n+sum(n-1);
   
   return ans;

}
int main(){
  int n=0;
  cout<<"Enter the number for sum ";
  cin>>n;
  cout<<"Answer= "<<sum(n)<<endl;
}