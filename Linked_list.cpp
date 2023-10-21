// BASICS of LINKED LIST 

#include <iostream>
#include <math.h>
using namespace std;

class node{
	public: int data;   node* next;

    node(int val){
    data = val;
    next = NULL;
    }	
};

node* insertAtBeg(node* &head,int val){
    node* n = new node(val);
    if(head == NULL)
        return n;
    
    node* temp;
    n->next = head;
    return n;
}

void insertAtTail(node* &head,int val){


    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void displayll (node* head){
    node* temp = head;
    if(temp == NULL)
        cout<<"There is no node in Linked list\n";

    cout<<"Elements in Linked list are\n";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL\n";
}

int main() {
    cout<<"\nLinked list\n\n";
    node* head = new node(1);
    node* sec = new node(2);
    head->next = sec;
    displayll(head);

    cout<<"\nInserting 3 at the END of Linked list\n";
    insertAtTail(head,3);
    displayll(head);

    cout<<"\nInserting 0 at the Beginning of Linked list\n";
    head = insertAtBeg(head,0);
    displayll(head);

    cout<<"\n\n";



    return 0;
}