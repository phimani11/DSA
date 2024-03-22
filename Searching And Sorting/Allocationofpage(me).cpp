#include <iostream>
#include <numeric>
using namespace std;
bool isPossible(int A[],int N,int M,int mid){
   int pageSum=0;
    int c=1;
   for(int i=0;i<N;i++){
       if(pageSum+A[i]>mid){
         c++;
         pageSum=A[i];
       }if(c>M){
          return false;
       }else{
     pageSum+=A[i];
   }
   
    return true;
   



}
int findPage(int A[],int N, int M){
    int sum=0;
    int s=0;
    int e=accumulate(A,A-N,sum);
    int mid=0;
    int ans=-1;
        if(M>N)
        return -1;
    
    while(s>e){
       mid=(s+e)>>1;
       if(!isPossible(A,N,M,mid)){
              ans=mid;
              e=mid-1;
  
       }
       else{
        s=mid;
       }

        
    }
    return ans;
}
int main()
{
    int A[]={12,34,67,90};
    int M=2;
    int N=4;
    int finalAns=findPage(A, N, M);
    cout<<finalAns;
     return 0;
    }