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


void storeInorder(Node* root,vector<int>&v){
    if(root==NULL){
        return;
    }

    storeInorder(root->left,v);
    v.push_back(root->data);
    storeInorder(root->right,v);
}

void replaceByPreorder(Node* root,vector<int>&v,int &index){
    if(root==NULL){
        return ; 
    }

    replaceByPreorder(root->left,v,index);
    replaceByPreorder(root->right,v,index);
    root->data=v[index];
    index++;

}
Node* bstintoHeap(Node*root){
    vector<int>v;
    storeInorder(root,v);
    int index=0;

    replaceByPreorder(root,v,index);
    return root;
}

int main(){
    Node* root=NULL;
    // cout<<root->data<<endl;
    createBST(root);

    levelorder(root);
cout<<endl;
    root=bstintoHeap(root);

    levelorder(root);
    
}