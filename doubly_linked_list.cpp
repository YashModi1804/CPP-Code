//doubly linked list is somewhat bi directional linked list in which there are three major component prev-data-next here previous stores the prev address just like next stores the next one's address
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* next;
    node* prev;
    int data;
    node(int val){
        next=NULL;
        prev=NULL;
        data=val;
    }
};
void insert_at_head(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    head=n; 


}
void insert_at_tail(node* &head,int val){
  if(head==NULL){
    insert_at_head(head,val); 
        return;
      
    }
    node* temp=head;
    node* n=new node(val);
      
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=NULL;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void deletion(node* &head,int pos){
    node* temp=head;
    node* prev_node;
    node* next_node;
    int count=1;
    while(count!=pos && temp!=NULL){
    temp=temp->next;
    count++;
    }
    prev_node=temp->prev;
    next_node=temp->next;
    if(prev_node!=NULL)
    prev_node->next=next_node;
    else
     head=next_node;
    
   
    if(next_node!=NULL)
    next_node->prev=prev_node;


    delete temp;

}

int main(){
    node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    deletion(head,1);
    display(head);

}