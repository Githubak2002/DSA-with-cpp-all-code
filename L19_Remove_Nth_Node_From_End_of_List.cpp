// 19. Remove Nth Node From End of List


// L141_Linked_List_Cycle.cpp

#include <iostream>
#include <math.h>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLL(ListNode *head)
{
  if(head == NULL){
    cout<<"LL is empty"<<endl;
    return;
  }
  ListNode *temp;
  temp = head;
  while (temp->next != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << temp->val <<"->"<< "NULL" << endl;
}

void addAtEnd(ListNode *&head, int newData)
{
  ListNode *newNode = new ListNode(newData);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  ListNode *current = head;
  while (current->next != nullptr)
  {
    current = current->next;
  }
  current->next = newNode;
}

int lengthLL(ListNode* head){
  int len = 0;
  ListNode* temp = head;
  while(temp != NULL){
    ++len;
    temp = temp->next;
  }
  return len;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
  int len = lengthLL(head);
  int position = len-n+1, initPos = 1;

  ListNode* temp = head;
  ListNode* remNode = nullptr;
  if(position == 1){
    temp = temp->next;
    delete head;
    return temp;
  }
  cout<<"position = "<<position<<endl;
  cout<<"initPos = "<<initPos<<endl;
  while (initPos < position-1)
  {
    temp = temp->next;   
    initPos++;
  }
  remNode = temp->next;
  if(remNode->next == NULL)
    temp->next = NULL;
  else
    temp->next = remNode->next;
  delete remNode;

  return head; 
}

int main()
{
  cout << "\n\n";

  ListNode *n0 = new ListNode;
  ListNode *n1 = new ListNode;
  ListNode *n2 = new ListNode;
  ListNode *n3 = new ListNode;

  n0->val = 1;  n0->next = n1;
  n1->val = 2;  n1->next = n2;
  n2->val = 3;  n2->next = n3;
  n3->val = 4;  n3->next = NULL;

  printLL(n0);
  cout<<"\nlen = "<<lengthLL(n0)<<endl;
  int del = 4;
  ListNode* final = removeNthFromEnd(n0,del);
  cout<<"\nAfter deleting last "<<del<<" node"<<endl;
  printLL(final);


  // cout<<"is there cycle in LL"<<hasCycle(n0)<<endl;

  cout << "\n\n";
  return 0;
}
