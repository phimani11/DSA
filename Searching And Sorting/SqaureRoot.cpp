#include <iostream>
using namespace std;
int squareRoot(int n){
    int s=0;
    int e=n;
    int mid =s+(e-s)/2;
    int ans= -1;
     while(s<=e){
       
        if(mid*mid==n){
             return mid;
        }
        else if(mid*mid<n){
           ans=mid;
            s=mid+1;
        }
       else {
        e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
 int main(){
    int n;
    cout<<"Enter the number for sqaure root: ";
    cin>>n;
    int ans=squareRoot(n);
    cout<<"Square root: "<<ans<<endl;
 }

 