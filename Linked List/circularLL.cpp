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
void printlist(Node*head){
    Node*temp=head;
   cout<<temp->data<<"->";
    
   do{
    temp=temp->next;
    cout<<temp->data<<"->";
   }while(temp!=head);

}
int main(){
    
   Node*first=new Node(10);
   Node*second=new Node(20);
   Node*third=new Node(30);
   Node*forth=new Node(40);

   Node*head=first;

   first->next=second;
   second->next=third;
   third->next=forth;
   forth->next=first;

   printlist(head);
}