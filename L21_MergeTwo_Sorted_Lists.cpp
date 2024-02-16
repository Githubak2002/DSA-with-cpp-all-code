// 21. Merge Two Sorted Lists

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
  if (head == NULL)
  {
    cout << "LL is empty" << endl;
    return;
  }
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

// my code - contains more lines
ListNode *mergeTwoLists1(ListNode *list1, ListNode *list2)
{
  ListNode *res = nullptr;
  while (list1 != NULL && list2 != NULL)
  {
    if (list1->val <= list2->val)
    {
      addAtEnd(res, list1->val);
      list1 = list1->next;
    }
    else
    {
      addAtEnd(res, list2->val);
      list2 = list2->next;
    }
  }
  while (list1 != NULL)
  {
    addAtEnd(res, list1->val);
    list1 = list1->next;
  }
  while (list2 != NULL)
  {
    addAtEnd(res, list2->val);
    list2 = list2->next;
  }

  return res;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
  ListNode *res = new ListNode();
  ListNode *temp = res;
  while (list1 != NULL && list2 != NULL)
  {
    if (list1->val <= list2->val)
    {
      temp->next = list1;
      list1 = list1->next;
    }
    else
    {
      temp->next = list2;
      list2 = list2->next;
    }
    temp = temp->next;
  }
  if (list1 == NULL)
    temp->next = list2;
  else
    temp->next = list1;

  return res->next;
}

int main()
{
  cout << "\n\n";

  ListNode *res = nullptr;
  ListNode *n1 = nullptr;
  ListNode *n2 = nullptr;

  addAtEnd(n1, 2);
  addAtEnd(n1, 3);
  addAtEnd(n1, 6);
  printLL(n1);

  addAtEnd(n2, 2);
  addAtEnd(n2, 4);
  addAtEnd(n2, 5);
  printLL(n2);

  res = mergeTwoLists(n1, n2);
  cout << "Merged ll " << endl;
  printLL(res);

  cout << "\n\n";
  return 0;
}
