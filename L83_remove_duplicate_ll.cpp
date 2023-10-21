/*  83. Remove Duplicates from Sorted List

link - https://leetcode.com/problems/remove-duplicates-from-sorted-list/description

*/

// BASICS of LINKED LIST 

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    // ListNode() : val(0), next(NULL) {}

ListNode* insertAtBeg(ListNode* &head,int val){
    ListNode* n = new ListNode;
    n->val = val;
    if(head == NULL)
        return n;
    
    ListNode* temp;
    n->next = head;
    return n;
}

void insertAtTail(ListNode* &head,int val){
    ListNode* n = new ListNode;
    n->val = val;
    if(head == NULL){
        head = n;
        return;
    }
    ListNode* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void displayll (ListNode* head){
    ListNode* temp = new ListNode;
    temp = head;
    if(temp == NULL)
        cout<<"There is no ListNode in Linked list\n";

    cout<<"Elements in Linked list are\n";
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }cout<<"NULL\n";
}

// not working [ reverse Ll ]
ListNode* reversell(ListNode* &head){
    // ListNode* newHead = new ListNode;
    // newHead =  reversell(head->next);

    ListNode* newHead =  reversell(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// my code not working
/*  ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL)
        return head;
    ListNode* temp = new ListNode;
    ListNode* prev = new ListNode;
    ListNode* nextNode = new ListNode;
    prev = head;
    int flag;
    while(prev != NULL){
        flag = 0;
        nextNode = prev->next;
        while(prev->val == nextNode->val){
            nextNode = nextNode->next;
            flag = 1;
        }
        if(flag == 1){
            prev->next = nextNode;
        }
        else
            prev = prev->next;

    }
    return head;      
}
*/


// GPT code
ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->val == current->next->val) {
            ListNode* duplicate = current->next;
            current->next = duplicate->next;
            delete duplicate; // Free the memory of the duplicate node
        } else {
            current = current->next;
        }
    }

    return head;
}


int main() {
    cout<<"\nLinked list -----------\n\n";
    ListNode* head = nullptr;
    head = insertAtBeg(head,3);
    head = insertAtBeg(head,2);
    head = insertAtBeg(head,2);
    head = insertAtBeg(head,1);
    head = insertAtBeg(head,0);
    displayll(head);

    /*  cout<<"\nInserting 0 at the Beginning of Linked list\n";
    head = insertAtBeg(head,0);
    displayll(head);

    cout<<"\nInserting 3 at the END of Linked list\n";
    insertAtTail(head,3);
    displayll(head);    */

    // ListNode* newHead = nullptr;
    // cout<<"\nReverseing the Linked list\n";
    // head = reversell(head);
    // displayll(head);

    cout<<"Deleting duplicate nodes of Ll\n";
    head = deleteDuplicates(head);
    displayll(head);



    cout<<"\n----------------";
    return 0;
}