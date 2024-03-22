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
void printlist(Node *head){
      Node* temp=head;
      while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
   }
   cout<<endl;
}
int main(){
    //creation of linked list
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(50);

    //connecting of linked list
    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    printlist(head);
}