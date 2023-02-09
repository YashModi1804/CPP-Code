#include <bits/stdc++.h>
using namespace std;

class node {
 public:
  int data;
  node* next;
  node(int val) {
    data = val;
    next = NULL;
  }
};

void insert_at_end(node* &head, int val) {
  node* n = new node(val);
  node* temp = head;
  if (head == NULL) {
    head = n;
    return;
  }
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node* head) {
  node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";
}

void make_cycle(node* &head, int pos) {
  node* temp = head;
  node* startnode;
  int count = 1;
  while (temp->next!= NULL) {
    if (count == pos) {
      startnode = temp;
    }
    temp = temp->next;
    count++;
  }
  temp->next = startnode;
}

bool detect_cycle(node* &head) {
  node* fast = head;
  node* slow = head;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return true;
    }
  }
  return false;
}
void remove_cycle(node* &head){
  node* fast=head;
  node* slow=head;
  do
  {
  slow=slow->next;
  fast=fast->next->next;
  }while(slow!=fast);
  fast=head;
  while(slow->next!=fast->next){
    slow=slow->next;
    fast=fast->next;
  }
  slow->next=NULL;


}

int main() {
  node* head;
  head = NULL;
  insert_at_end(head, 1);
  insert_at_end(head, 2);
  insert_at_end(head, 3);
  insert_at_end(head, 4);
  insert_at_end(head, 5);
  insert_at_end(head, 6);
  insert_at_end(head, 7);

  make_cycle(head, 3);
  //display(head);
  cout<<detect_cycle(head)<<endl;
  remove_cycle(head);
  cout<<detect_cycle(head)<<endl;
  display(head);
}
