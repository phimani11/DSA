#include<iostream>
#include <climits>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
   
   Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
   }
};
Node* createNode(){
    int data;
    cout<<"Enter the data for tree: "<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }else{
    Node* root=new Node(data);
    cout<<"Enter the Node for left: "<<root->data<<endl;
    root->left=createNode();
    cout<<"Enter the Node for right: "<<root->data<<endl;
    root->right=createNode();
    return root;
    }

}
class Info{
    public:
    int maxValue;
    bool isHeap;
 
 Info(int maxValue,bool isHeap){
    this->maxValue=maxValue;
    this->isHeap=isHeap;
 }

};

Info solve(Node *root){
    if(root==NULL){
      Info temp ;
      temp.maxValue=INT_MIN;
      temp.maxValue=true;
      return temp;
    }
    if(root->left==NULL&&root->right==NULL){
        Info temp;
        temp.maxValue=root->data;
        temp.isHeap=true;
    }

    Info leftAns=solve(root->left);
   Info rightAns=solve(root->right);

    if(root->data>leftAns.maxValue&& root->data >rightAns.maxValue&&leftAns.isHeap&&rightAns.isHeap){
          Info ans;
          ans.maxValue=root->data;
          ans.isHeap=true;
          return ans;
           }else{
            Info ans;
            ans.maxValue=max(root->data,max(leftAns.maxValue,rightAns.maxValue));
            ans.isHeap=false;
            return ans;
           }

  
}
int main(){

}