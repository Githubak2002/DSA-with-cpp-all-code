// 2095. Delete the Middle Node of a Linked List

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
  ListNode *temp;
  temp = head;
  while (temp->next != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << temp->val << "->"
       << "NULL" << endl;
}

// Reverse linked list
ListNode *reverseList(ListNode *head)
{
  if (head == NULL || head->next == NULL)
    return head;
  ListNode *prev = NULL;
  ListNode *curr = head;
  ListNode *future = NULL;

  while (curr != NULL)
  {
    future = curr->next;
    curr->next = prev;
    prev = curr;
    curr = future;
  }
  return prev;
}

// void deleteMiddle(ListNode* &head) {
ListNode *deleteMiddle(ListNode *head)
{
  if(head->next == NULL){
    delete head;
    return NULL;
  }
  ListNode *fast = head->next;
  ListNode *slow = head;
  ListNode *prev = NULL;
  while (fast != NULL)
  {
    // cout << "Slow is " << slow->val << endl;
    // cout << "fast is " << fast->val << endl;
    fast = fast->next;
    if (fast != NULL)
      fast = fast->next;
    prev = slow;
    slow = slow->next;
  }
  prev->next = slow->next;
  delete slow;
  return head;
}


int main()
{
  cout << "\n\n";

  ListNode *head = new ListNode;
  ListNode *n1 = new ListNode;
  ListNode *n2 = new ListNode;
  ListNode *n3 = new ListNode;
  ListNode *n4 = new ListNode;
  head->val = 10;
  head->next = n1;
  n1->val = 20;
  n1->next = n2;
  n2->val = 30;
  n2->next = n3;
  n3->val = 40;
  n3->next = n4;
  n4->val = 50;
  n4->next = NULL;
  printLL(head);

  ListNode *midNode = new ListNode;

  cout << "After deleting mid node LL \n";
  head = deleteMiddle(head);
  printLL(head);

  cout << "\n\n";
  return 0;
}
