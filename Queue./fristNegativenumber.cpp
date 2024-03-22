#include<iostream>
#include<deque>

using namespace std;
void findFristnegative(int *arr,int n,int k){
    deque<int>dq;
    for(int i=0;i<k;i++){
       if(arr[i]<0){
        dq.push_back(i);
       }
    }
       for(int i=k;i<n;i++){
        if(dq.empty()){
            cout<<"0"<<" "<<endl;
        }else{
            cout<<arr[dq.front()]<<" ";
        }

        if(i-dq.front()>=k){
            dq.pop_front();
        }else{
            dq.push_back(i);
        }

        if(dq.empty()){
            cout<<"0"<<" "<<endl;
        }
        if(arr[i]<0){
            dq.push_back(i);

        }

                  
       }
       if(dq.empty()){
            cout<<"0"<<endl;
        }else{
            cout<<dq.front()<<endl;
        }
    

}
int main(){
   int arr[7] = {2, -5, 4, -1, -2, 0, 5};
    int n = 7;
    int k = 3;
    findFristnegative(arr, n, k);
    return 0;
}