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
void listLen(Node*&head,Node*&tail,int &count){
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
}
void insertionAtBegin(Node*&head,Node*&tail,int data){
    if(head==NULL){
        //creation of node
        Node* newNode=new Node(data);
        //update head
        head=newNode;
        tail=newNode;

    }else{

    //creation of node
    Node* newNode=new Node(data);
    //attach the node
    newNode->next=head;
    //update head
    head=newNode;

    }

}
void insertionAtTail(Node*&head,Node*&tail,int data){
    if(tail==NULL){
       Node* newNode=new Node(data);
      
       tail=newNode;
    }else{
    Node* newNode=new Node(data);
    
    tail->next=newNode;

    tail=newNode;
    }
}
void inBetween(Node*&head,Node*&tail,int data,int position ,int count){
    
    if(position==1){
         insertionAtBegin(head,tail,data);
    }else if(position==count+1){
        insertionAtTail(head,tail,data);
    }else if(position<1 || position>count+1){
          cout<<"Position is  not correct";
    }else{
        Node*newNode=new Node(data);

        Node* prev=NULL;
        Node* curr=head;

        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }
        
       prev->next=newNode;
       newNode->next=curr;


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
    int count=0;
    //creation of linked list
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* forth=new Node(40);
    Node* fifth=new Node(50);

    //connecting of linked list
    Node* head=first;
    Node* tail=fifth;
    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    listLen(head,tail,count);
    insertionAtBegin(head,tail,500);
    insertionAtTail(head,tail,1000);
    inBetween(head,tail,7,3,count);

    printlist(head);
}