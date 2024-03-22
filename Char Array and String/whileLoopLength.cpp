#include <iostream>
using namespace std;
int main(){
   char ch[20];
   int length=0;
   for(int i=0;i<20;i++){
    cin>>ch[i];
   }
   int i=0;
   while(ch[i]!='/0'){
    length++;
   }
   for(int i=0;i<length;i++){
   cout<<ch[i];
   }
   cout<<"Length: "<<length;
}