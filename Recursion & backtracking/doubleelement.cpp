#include<iostream>
using namespace std;
void doubleOf(int arr[],int size,int index){
    if(index>=size){
        return ;
    }
    cout<<2*arr[index]<<" ";

    doubleOf(arr,size,index+1);

}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;

    doubleOf(arr,size,index);
}