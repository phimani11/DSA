#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

Node* reverse(Node*&head){
      Node*prev=NULL;
      Node*curr=head;
      
      while(curr!=NULL){
       Node*next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
      }
    return prev;
}
 void addOne(Node*&head){
    Node*temp=head;
    int carry=1;
    while(temp->next!=NULL){
      int totalSum=temp->data+carry;
      int digit=totalSum%10;
       carry=totalSum/10;

       temp->data=digit;
       temp=temp->next;

       if(carry==0){
        break;
       }
    }

    int totalSum=temp->data+carry;
    int digit=totalSum%10;
    carry=totalSum/10;

    temp->data=digit;
    if(carry!=0){
        Node* newNode=new Node(1);
        temp->next=newNode;
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
    Node* first=new Node(9);
    Node* second=new Node(9);
    Node* third=new Node(9);
    
    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    head=reverse(head);
    addOne(head);
    head=reverse(head);

    printlist(head);

}