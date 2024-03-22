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
Node* balanceTree(int arr[],int s,int e){
    int mid=(s+e)/2;
    int element=arr[mid];

    if(s>e){
        return NULL;
    }

    Node*root=new Node(element);

    root->left=balanceTree(arr,s,mid-1);
    root->right=balanceTree(arr,mid+1,e);

    return root;

    
}
void convertBinarytoLL(Node*root,Node* &head){
    if (root==NULL){
        return;
    }

    //R
    convertBinarytoLL(root->right,head);

    //n
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;

    //L
    convertBinarytoLL(root->left,head);
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->right;
    }
   cout<< endl;
}
int main(){
    int inOrder[]={10,20,30,40,50,60,70};
    int size=7;
    int s=0;
    int e=size-1;
    Node*head=NULL;


    Node*root=balanceTree(inOrder,s,e);

    levelOrder(root);
  cout<<endl;
  convertBinarytoLL(root,head);

  printLL(head);


}