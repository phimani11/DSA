#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(){
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

};
int lenList(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;

}
void insertionAtBegin(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        tail=newNode;


    }
    else{
        Node* newNode=new Node(data);
        Node* temp=head;
        
        temp->prev=newNode;
        newNode->next=head;
        head->prev=NULL;
        head=newNode;
    }
}
void insertionAtTail(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        tail=newNode;

    }
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    tail->next=NULL;
}
void insertionAtPosition(Node*&head,Node*&tail,int position,int data,int len){
    if(position==1){
        insertionAtBegin(head,tail,data);
    }else if(position==len+1){
        insertionAtTail(head,tail,data);
    }else{
        Node* newNode=new Node(data);
        Node* pre=NULL;
        Node* curr=head;
        while(position!=1){
            pre=curr;
            curr=curr->next;
            position--;
        }
      pre->next=newNode;
      newNode->prev=pre;
      newNode->next=curr;
      curr->prev=newNode;

        
    }

}



void print(Node*head){
   Node* temp=head;
   while(temp!=NULL){
     cout<<temp->data<<"->";
     temp=temp->next;
   }
   cout<<endl;
}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third =new Node(30);
    Node* forth=new Node(40);
    
    Node*head=first;
    Node*tail=forth;
    first->prev=NULL;
    second->prev=first;
    third->prev=second;
    forth->prev=third;
    

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=NULL;
    
    int size=lenList(head);
    insertionAtPosition(head,tail,3,8,size);
    print(head);




}