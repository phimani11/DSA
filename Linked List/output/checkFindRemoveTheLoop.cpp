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
bool checkTheLoop(Node* head){
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

            if(slow==fast){
                return true;
            }
        }
        
    }
    return false;
}
Node* findLoop(Node*head){
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL){
          fast=fast->next;
          if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
          }
             if(slow==fast){
                break;
             }
          }
         slow=head; 
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    
}
void removeLoop(Node*head){
     Node*fast=head;
    Node*slow=head;
    while(fast!=NULL){
          fast=fast->next;
          if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
          }
             if(slow==fast){
                break;
             }
          }
         slow=head; 
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        
     Node* start=slow;
     Node* temp=fast;
     while(temp->next!=slow){
        temp=temp->next;
     }
     temp->next=NULL;
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
      Node*first=new Node(10);
      Node*second =new Node(20);
      Node*third=new Node(30);
      Node*forth=new Node(40);
      Node*fifth=new Node(50);
      Node*sixth=new Node(60);
      Node*seventh=new Node(70);
      Node*eighth =new Node(80);
       
      Node*head=first;
      first->next=second;
      second->next=third;
      third->next=forth;
      forth->next=fifth;
      fifth->next=sixth;
      sixth->next=seventh;
      seventh->next=eighth;
      eighth->next=forth;
Node*startpoint=findLoop(head);
cout<<startpoint->data<<endl;

removeLoop(head);
printlist(head);
       
}
