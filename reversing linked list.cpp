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
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);}
    return prevptr;

}
//now for reversing the linked list we will make a function but the point is that will be intializing the funciton with node*
node* reverse(node* &head){
    node* prev_ptr=NULL;
    node* curr_ptr=head;
    node* next_ptr;
    while(curr_ptr!=NULL){
        next_ptr=curr_ptr->next;
        curr_ptr->next=prev_ptr;
         prev_ptr=curr_ptr;
         curr_ptr=next_ptr;
         
    }
    return prev_ptr;
    
}
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
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
node* recurssive_reverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
   node* newhead=recurssive_reverse(head->next);
   head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    node* head;
    head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_head(head,4);
   node* newhead=reversek(head,2);
    display(newhead);
}