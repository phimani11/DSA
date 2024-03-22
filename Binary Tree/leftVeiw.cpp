#include<iostream>
#include<queue>

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

void printLeftView(Node*root,int level,vector<int>&leftview){
    if(root==NULL){ 
        return;
   }
   else{
    if(level==leftview.size()){
        leftview.push_back(root->data);
    }
  printLeftView(root->left,level+1,leftview);
   printLeftView(root->right,level+1,leftview);
   
   }
}

int main(){
    Node* root=createTree();

    levelorder(root);

    cout<<"Printing Node:"<<endl;
    vector<int>leftveiw;
    int level=0;
    printLeftView(root,level,leftveiw);
    for(int i=0;i<leftveiw.size();i++){
       cout<<leftveiw[i]<<" ";
    }


}