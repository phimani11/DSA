#include<iostream>
#include <queue>
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
void levelOrder(Node* data){
    queue<Node*>q;
    q.push(data);
    q.push(NULL);

    while(q.size()>1){
    Node* front= q.front();
    q.pop();

    if(front==NULL){
        cout<<endl;
        q.push(NULL);
    }else{
        
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

int main(){
    Node* root=createNode();
    // cout<<root->data<<endl;

    levelOrder(root);
}