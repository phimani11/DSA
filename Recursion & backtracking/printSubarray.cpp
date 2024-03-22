#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[],int size,int index,vector<int> vc){
  if(index==size){
    for(auto element:vc){
        cout<<element<<" ";
    }
    cout<<endl;
  }
  int num =arr[index];
   
  printArray(arr, size,index+1,vc);
  vc.push_back(num);


  printArray(arr,size,index+1,vc);
     
}
int main(){
  int arr[]={10,20,30,40,50};
  int size=5;
  int index=0;
  vector<int> vc;
printArray(arr,size,index,vc);

}