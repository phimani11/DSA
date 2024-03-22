#include<iostream>
using namespace std;
long merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int lenLeft=mid-s+1;
    int lenRight=e-mid;
    long c=0;

    int *left=new int[lenLeft];
    int *right=new int[lenRight];
    
    int k=s;
    for(int i=0;i<lenLeft;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<lenRight;i++){
        right[i]=arr[k];
        k++;
    }

   int leftIndex=0;
   int rightIndex=0;
   int mainarrayIndex=s;

   while(lenLeft>=leftIndex&&lenRight>=rightIndex){
         if(left[leftIndex]>right[rightIndex]){
            arr[mainarrayIndex]=right[rightIndex];
            mainarrayIndex++;
            rightIndex++;
            c=mid-leftIndex+1;
         }else{
            arr[mainarrayIndex]=left[leftIndex];
            mainarrayIndex++;
            leftIndex++;

         }

   }

return c;


}
long mergeSort(int arr[],int s,int e){
    long c=0;
    if (s>=e)
       return 0;
   int mid=s+(e-s)/2;
   c+=mergeSort(arr,s,mid);
   c+= mergeSort(arr,mid+1,e);
   c+=merge(arr,s,e);
   return c;

}
int main(){
    long c=0;
    int arr[]={4,3,2,1};
    int s=0;
    int e=s-1;
    c= mergeSort(arr, s,e);
    cout<<c<<endl;

}