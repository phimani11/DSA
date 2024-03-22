// Given that there are N books and M students. Also given are the number of pages in each book in ascending order. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum, with the condition that every student is assigned to read some consecutive books. Print that minimum number of pages.

// Input: N = 4, pages[] = {12, 34, 67, 90}, M = 2
// Output: 113

// Explanation: There are 2 number of students. Books can be distributed in following combinations: 

// [12] and [34, 67, 90] -> Max number of pages is allocated to student ‘2’ with 34 + 67 + 90 = 191 pages
// [12, 34] and [67, 90] -> Max number of pages is allocated to student ‘2’ with 67 + 90 = 157 pages 
// [12, 34, 67] and [90] -> Max number of pages is allocated to student ‘1’ with 12 + 34 + 67 = 113 pages
// Of the 3 cases, Option 3 has the minimum pages = 113.
#include<iostream>
#include<numeric>
using namespace std;
bool Ofpossible(int arr[],int M,int N, int mid){
   int pageSum=0;
   int c=1;
   for(int i=0;i<N;i++){
    if(arr[i]>mid){
        return false;
    }
    if(pageSum+arr[i]>mid){
        c++;
        pageSum=arr[i];
        if(c>M){
            return false;
        }
    }
    else{
        pageSum+=arr[i];
    }
   }
   return true;

}
 int findpage(int arr[],int M,int N){
    int sum=0;
    int s=0;
    int e= accumulate(arr,arr-N,sum);
    int ans=-1;
    int mid=0;

    if(M>N){
    return -1;
    }
    
    while(s<=e){
     mid=(s+e)>>1;
        if(!Ofpossible(arr,N,M,mid)){
             ans=mid;
             e=mid-1;
        }
        else{
            s=mid;
        }
    }
    return ans;
 }
int main(){
   int arr[]={12,34,67,90};
   int M=2;
   int n=4;   
   findpage(arr,M,n);
}
