/*    203. Remove Linked List Elements

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// insert at beggining of Linked list
ListNode* insertAtBeg(ListNode* &head,int val){
    ListNode* n = new ListNode(val);
    if(head == NULL)
        return n;
    
    ListNode* temp;
    n->next = head;
    return n;
}

// display
void displayll (ListNode* head){
    ListNode* temp = head;
    if(temp == NULL)
        cout<<"There is no ListNode in Linked list\n";

    cout<<"Elements in Linked list are\n";
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }cout<<"NULL\n";
}

ListNode* removeElements(ListNode* head, int val) {
    if(head == NULL)
        return;
    // if(head->val == val){
    //     delete head;
    //     return;
    // }
    ListNode* temp = head;
    ListNode* prev = new ListNode;
    while(temp != NULL){
        if(temp->val == val){
            prev = temp;
            temp = temp->next;
            delete prev;
        }
    }
}

int main(){
    cout<<"\nLinked list ---------\n\n";
    

    ListNode* head = nullptr;
    head = insertAtBeg(head,4);
    head = insertAtBeg(head,3);
    head = insertAtBeg(head,4);
    head = insertAtBeg(head,2);
    head = insertAtBeg(head,1);
    displayll(head);

    cout<<"\n-------------------";


    return 0;
}