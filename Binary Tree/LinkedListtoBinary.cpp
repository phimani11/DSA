#include <iostream>
#include <queue>
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

Node*LinkedListtobinary(Node* &head,int n){
    if(head==NULL||n<=0){
        return NULL;
    }

    Node* leftsubtree=LinkedListtobinary(head,n/2);

    Node* root=head;
    root->left=leftsubtree;
    head=head->right;

    Node* rightsubtree=LinkedListtobinary(head,n-n/2-1);
    root->right=rightsubtree;
}

int main(){
    Node* frist=new Node(10);
     Node* second=new Node(20);
      Node* third=new Node(30);

      frist->right=second;
      second->left=frist;
      second->right=third;
      third->left=second;

      Node*head=frist;
      
      Node* root=LinkedListtobinary(head,3);

      levelOrder(root);


}
