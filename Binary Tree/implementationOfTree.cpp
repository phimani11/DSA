#include<iostream>
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
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    //N 
    cout<<root->data<<" ";
    // L
    preorder(root->left);

    //R
    preorder(root->right);
  
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
   
    // L
    preorder(root->left);

     //N 
    cout<<root->data<<" ";

    //R
    preorder(root->right);
  
}
void postorder(Node*root){
    if(root==NULL){
        return;
    }
    
    // L
    preorder(root->left);

    //R
    preorder(root->right);

    //N 
    cout<<root->data<<" ";
  
}
int main(){
    Node* root=createNode();
    cout<<root->data<<endl;

   cout<<"PREORDER:-";
   preorder(root);
   cout<<endl;
    
    cout<<"Inorder:-";
    inorder(root);
    cout<<endl;
   
   cout<<"postorder:-";
    postorder(root);
    cout<<endl;
}
