#include <iostream>
using namespace std;
float squareRoot(float n){
    float s=0;
   float e=n;
    float mid =s+(e-s)/2;
    float ans=0;
    
    while(s<=e){
        if(mid*mid==n){
             return mid;
        }
        else if(mid*mid<n){
           ans=mid;
            s=mid+0.001;
        }
       else {
        e=mid-0.001;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    }

 int main(){
    float n;
    cout<<"Enter the number for sqaure root: ";
    cin>>n;
    float ans=squareRoot(n);
    cout<<"Square root: %3f "<<ans<<endl;
 }

 