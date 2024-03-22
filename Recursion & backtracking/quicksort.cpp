#include<iostream>
using namespace std;
void quicksort(int arr[],int s,int e){
    if(s>e){
    return;
   }
   int pivot=e;
   int i=s-1;
   int j=s;
   
   while(pivot>j){
     if(arr[pivot]>arr[j]){
        ++i;
        swap(arr[i],arr[j]);
     }
     ++j;
   }
   ++i;
   swap(arr[pivot],arr[i]);

   quicksort(arr,s,i-1);
   quicksort(arr,i+1,e);



}
int main(){
    int arr[]={60,30,200,17,90,80};
    int s=0;
    int e=5;
    quicksort(arr,s,e);  
    for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
      

}
