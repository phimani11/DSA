#include<iostream>
using namespace std;
bool isPossible(int stall[],int k,int n,int mid){
    int c=0;
    int pos=stall[0];
    for(int i=0;i<n;i++){
        if(stall[i]-pos>=mid){
            c++;
            pos=stall[i];
        }
        if(c==k) return true;
    }
  return false;
}
int placement(int stall[],int k,int n)
{  
   
    int start=0;
    int  end=stall[n-1]-stall[0];
    int mid=(start+end)>>1;
    int ans=mid;
    while(start>=end){
    if(isPossible(stall,k,n,mid)){
        ans=mid;
        start=mid+1;
    }else{
        end=mid-1;
    }
    
}
return ans;
}
int main(){
    int stall[]={1,2,4,8,9};
    int k=3;
    int n=5;
    int ans=placement(stall,k,n);
    cout<<ans<<endl;
}