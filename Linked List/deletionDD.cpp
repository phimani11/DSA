#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->prev=NULL;
        this->next=NULL;
        }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
void deletionInDD(Node*&head, Node*&tail,int position,int len){
    if(position==1){
      Node*temp=head;
      head=head->next;
      temp->next=NULL;
      temp->prev=NULL;

      delete temp;

    }else if(position==len){
        Node*prevNode=tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;   
    }
    else{
        Node*prevNode=NULL;
        Node*currNode=head;
        while(position!=1){
            prevNode=currNode;
            currNode=currNode->next;
            position--;
        }
        Node*nextNode=currNode->next;
        nextNode->prev=prevNode;
        currNode->next=NULL;
        currNode->prev=NULL;
        prevNode->next=nextNode;

        delete currNode;

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
    
    deletionInDD(head,tail,3,size);
    printlist(head);


}