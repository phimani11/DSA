#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
void levelorder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node*frontNode=q.front();
        q.pop();

        if(frontNode==NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
          cout<<frontNode->data<<" ";
        if(frontNode->left!=NULL){
            q.push(frontNode->left);
        }
        if(frontNode->right!=NULL){
            q.push(frontNode->right);
        }

        }
    }
}
Node* insertThedata(Node*&root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    

    if(root->data<data){
        root->right=insertThedata(root->right,data);
     }
     else{
         root->left=insertThedata(root->left,data);
     }

     return root;
}
void createBST(Node*&root){
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    while(data!=-1){
        root=insertThedata(root,data);
        cout<<"Enter the data: ";
        cin>>data;

    }
}

bool searchInBST(Node* root,int target){
    if(root==NULL){
        return false;
    }
    if(target==root->data){
        return true;
    }
   bool leftAns=false;
   bool rightAns=false;
    if(root->data<target){
       rightAns=searchInBST(root->right,target);
    }
    if(root->data>target){
       leftAns=searchInBST(root->left,target);
    }
  

 return leftAns||rightAns;

}
int main(){

    Node* root=NULL;
    createBST(root);
    levelorder(root);

    int t;
    cout<<"Enter the target: ";
    cin>>t;
    bool ans=false;
    while(t!=-1){
        ans=searchInBST(root,t);
        
         if(ans){
            cout<<"Found "<<endl;
         }else{
            cout<<"Not found"<<endl;
         }
         cout<<"Enter the target: ";
         cin>>t;
    }
    

}