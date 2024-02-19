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
  // cout<<"aaya";
  int h = -4;
  ListNode *temp;
  temp = head;
  while (temp->val != h)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << temp->val <<endl;
      //  << "NULL" << endl;
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

bool hasCycle(ListNode *head){
  // Fast and slow concept
}

int main()
{
  cout << "\n\n";

  // ListNode *head = new ListNode;
  ListNode *n0 = new ListNode;
  ListNode *n1 = new ListNode;
  ListNode *n2 = new ListNode;
  ListNode *n3 = new ListNode;

  n0->val = 3;  n0->next = n1;
  n1->val = 2;  n1->next = n2;
  n2->val = 0;  n2->next = n3;
  n3->val = -4;  n3->next = n1;

  printLL(n0);

  cout<<"is there cycle in LL"<<hasCycle(n0)<<endl;

  /*
  addAtEnd(n1,9);
  addAtEnd(n1,9);
  addAtEnd(n1,9);
  addAtEnd(n1,9);

  addAtEnd(n2,9);
  addAtEnd(n2,9);
  addAtEnd(n2,9);
  addAtEnd(n2,9);
  addAtEnd(n2,9);
  addAtEnd(n2,9);
  */

  cout << "\n\n";
  return 0;
}
