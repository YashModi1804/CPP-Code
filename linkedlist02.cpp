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
void first_deletion(node* &head,int val){
    node* todelete=head;
    head=head->next;
    delete todelete; 
}
// void deletion(node* &head,int val){//now there is a corner case as if val is the first element or we have to delete the first element of the linked list than this fucntion will collapse as we have no n-1 th element 
//     node* temp= head;
//     while(temp->next->data!=val){
//         temp=temp->next;

//     }
//     node* todelete=temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
//}
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
// bool search(node* head,int key){
//     node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }
int main(){
    node* head;
    head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);

    insert_at_head(head,4);
    // deletion(head,2);
    display(head);
   
}