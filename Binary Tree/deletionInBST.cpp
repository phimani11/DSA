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
Node* minvalue(Node* root){
    if(root==NULL){
        cout<<"No minimum element ";
        return NULL;
    }
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxvalue(Node* root){
    if(root==NULL){
        cout<<"No maximum element ";
        return NULL;
    }
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node* deletionInBST(Node* root, int target){
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==target){
    if(root->left==NULL&&root->right==NULL){
        delete root;
        return NULL;
    }else if(root->left!=NULL&&root->right==NULL){
        Node*childSubtree=root->left;
        delete root;
        return childSubtree;
        
    }else if(root->left==NULL&&root->right!=NULL){
        Node*childSubtree=root->right;
        delete root;
        return childSubtree;
        
    }else{
       Node* maxi=maxvalue(root->left);
       root->data=maxi->data;
       delete maxi;

       root->left=deletionInBST(root->left,maxi->data);
       return root;


    }

    }
    if(root->data>target){
        root->left=deletionInBST(root->left,target);
    } if(root->data<target){
        root->right=deletionInBST(root->right,target);
    }
    return root;
}
int main(){

    Node* root=NULL;
    createBST(root);
    levelorder(root);

    int t;
    cout<<"Enter the target ";
    cin>>t;

    while(t!=-1){
       root=deletionInBST(root,t);
       levelorder(root);
       cout<<"Enter the target ";
       cin>>t;
       
    }

}