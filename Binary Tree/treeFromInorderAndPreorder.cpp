#include<iostream>
#include<queue>
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

int search(int inorder[],int size,int element){
    for(int i=0;i<size;i++){
        if(inorder[i]==element){
            return i;
            
        }
    }
    return -1;
}

Node* solve(int inorder[],int preorder[],int size,int&preorderIndex,int inorderstart,int inorderend){
    if(preorderIndex>=size||inorderstart>inorderend){
        return NULL;
    }
 int element=preorder[preorderIndex];
 preorderIndex++;

 Node* root=new Node(element);
 int position=search(inorder,size,element);

 root->left=solve( inorder,preorder,size,preorderIndex,inorderstart, position-1);
 root->right=solve( inorder,preorder,size,preorderIndex, position+1,inorderend);
  
  return root;

}
int main(){
  int inorder[]={10,8,6,2,4,12};
  int preorder[]={2,8,10,6,4,12};
  int size=6;
  int preorderIndex=0;
  int inorderstart=0;
  int inorderend=5;

 Node* root= solve(inorder,preorder,size,preorderIndex,inorderstart,inorderend);
  levelOrder(root);
}