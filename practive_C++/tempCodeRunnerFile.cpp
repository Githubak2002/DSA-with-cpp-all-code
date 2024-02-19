// L206. Reverse Linked List
// Reverse the LL - do it using recursion
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

class node
{
public:
  int data;
  node *next;
  // constructor
  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  // destructor
  ~node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "Memory if free for node with data = " << value << endl;
  }
};

// INSERTION

void insertAtBeg(int newdata, node *&head)
{
  node *temp = new node(newdata);
  temp->next = head;
  head = temp;
}

void insertAtEnd(int newdata, node *&head)
{
  node *newNode = new node(newdata);
  node *tailNode = head;
  while (tailNode->next != NULL)
    tailNode = tailNode->next;
  cout << "\nTail node data " << tailNode->data << endl;
  tailNode->next = newNode;
}

void insertAtPosition(int newdata, node *&head, int position)
{
  if (position == 1)
  {
    insertAtBeg(newdata, head);
    return;
  }
  node *newNode = new node(newdata);
  node *temp = head;
  int initialpos = 1;

  while (initialpos < position - 1)
  {
    initialpos++;
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// DELETION
void deletePos(int position, node *&head)
{
  node *currNode = head;
  node *prevNode;
  if (position == 1)
  {
    head = head->next;
    currNode->next = NULL;
    delete currNode;
    return;
  }
  int pos = 1;
  while (pos < position)
  {
    prevNode = currNode;
    currNode = currNode->next;
    pos++;
  }
  if (currNode->next == NULL)
    prevNode->next = NULL;
  else
    prevNode->next = currNode->next;
  currNode->next = NULL;
  delete currNode;
}

int main()
{
  cout << "\n\n";
  /*
  node *head = new node(30);
  insertAtBeg(20, head);
  insertAtBeg(10, head);
  insertAtEnd(40, head);
  printLL(head);

  cout << "\nInserting 99 at 3\n";
  insertAtPosition(99, head, 3);
  printLL(head);

  cout << "\nDeleting node at 3\n";
  deletePos(3, head);
  printLL(head);
  */

  ListNode *head = new ListNode;
  ListNode *n1 = new ListNode;
  ListNode *n2 = new ListNode;
  ListNode *n3 = new ListNode;
  head->val = 10;
  head->next = n1;
  n1->val = 20;
  n1->next = n2;
  n2->val = 30;
  n2->next = n3;
  n3->val = 40;
  n3->next = NULL;
  printLL(head);

  cout << "After reversing LL \n";
  head = reverseList(head);
  printLL(head);

  cout << "\n\n";
  return 0;
}
