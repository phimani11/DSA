#include<iostream>
using namespace std;
class Node{
public: 
    int data;
    Node*next;

    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
   
};
void reverse(Node*&head){
   Node*prev=NULL;
   Node*curr=head;

   while(curr!=NULL){
    Node* nextNode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextNode;
     }
head=prev;
 
}
void printlist(Node *head){
      Node* temp=head;
      while(temp!=NULL){
       cout<<"*"<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<endl;
}
int main(){
    Node*first =new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*forth=new Node(40);
     
    Node*head=first;

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=NULL;



    printlist(head);
    cout<<"This is reverse list: "<<endl;
    reverse(head);
    printlist(head);
}