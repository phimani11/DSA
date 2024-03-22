
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

void topView(Node* root){
    map<int,int>hdToNodemap;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
      pair<Node*,int>temp=q.front();
      q.pop();

      Node* frontNode=temp.first;
      int hd=temp.second;

      if(hdToNodemap.find(hd)==hdToNodemap.end()){
        hdToNodemap[hd]=frontNode->data;
      }

      if(frontNode->left!=NULL){
        q.push(make_pair(frontNode->left,hd-1));
      }

       if(frontNode->right!=NULL){
        q.push(make_pair(frontNode->right,hd+1));
      }
    }

    cout<<"printing Node: "<<endl;
    for(auto i:hdToNodemap){
        cout<<i.second<<" ";
    }


}
int main(){

    Node* root=createTree();

    levelorder(root);

    topView(root);


}