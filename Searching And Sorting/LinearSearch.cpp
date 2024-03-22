#include<iostream>
using namespace std;
void searching(int arr[],int size,int search){
    // bool found=false;
      for(int i=0;i<size;i++){
        if(arr[i]==search){
            // found=true;
            cout<<"ELEMENT IS FOUND "<<i+1<<" AT POSITION"<<endl;
            break;
        }

      }


}
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int target;
    cout<<"Enter the number for searching:  ";
    cin>>target;
    int size=7;
   searching(arr,size,target);
}
