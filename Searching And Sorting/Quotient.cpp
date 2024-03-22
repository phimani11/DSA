#include <iostream>
using namespace std;
int qoutient(int dividend,int divisor){
      int s=0;
      int e=dividend;
      int mid=s+(e-s)/2;
      int ans=-1;
      while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }else if(mid*divisor<dividend){
            ans=mid;
           s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
      }
      return ans;
}
int main(){
    int dividend;
    int divisor;
    cout<<"Enter DIVIDEND: "<<endl;
    cin>>dividend;
    cout<<"Enter DIVISOR: ";
    cin>>divisor;
    int ans=qoutient(dividend,divisor);
    cout<<"Qoutient : " <<ans<<endl;

}
