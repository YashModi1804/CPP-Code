#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
     node(int val){
        data=val;
        next=NULL;
    }
};

void insert_at_head(node* &head,int val){
    if(head==NULL){
        cout<<"linked list is empty";
    }
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;   
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
}
void append(node* &head,int num){
    node* temp=head;
    node* newhead;
    node* newtail;
    node* tail;

   int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
        tail=temp;
    }
    int l=count;
    temp=head;
    int check=1;
    while(check!=l-num){
        check++;
        temp=temp->next;

    }
    newtail=temp;
    newhead=temp->next;
    newtail->next=NULL;
    tail->next=head;
    head=newhead;
    

    
}

int main(){
    node* head;
    head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    append(head,3);
    display(head);


    
   
}