#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
       this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int  lenList(Node* head,Node*tail,int len){
   len=0;
   Node* temp=head; 
   while(temp!=NULL){
      temp=temp->next;
      len++;
   }
   return len;
}

void deletion(Node* &head,Node* &tail,int position,int len){
    if(head==tail){
        Node*temp=head;
        delete temp;
        tail->next=NULL;

        head->next=NULL;
    }
    if(position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }else if(position==len){
        Node* prev = head;
        while(prev->next!=tail){
            prev=prev->next;
            }
            prev->next=NULL;
            delete tail;
            tail=prev;

    }else{
        Node*prev=NULL;
        Node*curr=head;

        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
    }
     
     prev->next=curr->next;

     curr->next=NULL;

     delete curr;

    }
}
void printlist(Node *head){
      Node* temp=head;
      while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<endl;
}
int main(){
   
   Node* first =new Node(10);
   Node* second =new Node(20);
   Node* third =new Node(30);
   Node* forth =new Node(40);
   
   Node* head=first;
   first->next=second;
   second->next=third;
   third->next=forth;
   forth->next=NULL;
   
   Node* tail=forth;
    
  int size=lenList(head,tail,0);
  deletion(head,tail,3,size);
  printlist(head);

}