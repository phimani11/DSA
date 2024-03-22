
#include<iostream>
#include<queue>
#include<map>

using namespace std;
class Node{
    public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
     this->data=val;
     this->left=NULL;
     this->right=NULL;

   }
};

Node* createTree(){
 int data;
 cout<<"Enter the data for root: ";
 cin>>data;
 

 if(data==-1){
    return NULL;
 }
 else{
    Node*root=new Node(data);
  cout<<"Enter the data for left:";
  root->left=createTree();

  cout<<"Enter the data for right: ";
  root->right=createTree();
   
   return root;
 }
}
 void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){
      Node* front=q.front();
      q.pop();

      if(front==NULL){
        cout<<endl;
        q.push(NULL);
      }
      else{
        cout<<front->data<<" ";
            
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }

      }
    }
    
 }

 void leftBoundaryPrint(Node* root){
    if(root==NULL){
        return;
    }

    if(root->left==NULL&&root->right==NULL){
        return ;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL){
        leftBoundaryPrint(root->left);
    }else{
        leftBoundaryPrint(root->right);
    }
 }

 void leafBoundaryPrint(Node*root){
    if(root==NULL){
        return;
    }

    if(root->left==NULL &&root->right==NULL){
       cout<<root->data<<" ";
    }
    leafBoundaryPrint(root->left);
    leafBoundaryPrint(root->right);

 }

 void rightBoundaryPrint(Node*root){
    if(root==NULL){
        return;
    }

    if(root->left==NULL&&root->right==NULL){
        return ;
    }
    
    if(root->right!=NULL){
       rightBoundaryPrint(root->right);
    }else{
        rightBoundaryPrint(root->left);
    }
    cout<<root->data<<" ";

 }

void boundaryTraversal(Node* root){
     if(root==NULL){
        return;
     }
     cout<<root->data<<" ";
      leftBoundaryPrint(root->left);
      leafBoundaryPrint(root->left);
      leafBoundaryPrint(root->right);
      rightBoundaryPrint(root->right);

     
}

int main(){

    Node* root=createTree();

    levelorder(root);
    cout<<endl;

    boundaryTraversal(root);

    


}