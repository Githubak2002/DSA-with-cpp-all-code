// L83 Remove Duplicates from Sorted List

#include <iostream>
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

ListNode* deleteDuplicates(ListNode* head){
  ListNode* tmp = head;
  // ListNode* prev = NULL;
  while (tmp != NULL)
  {
    if(tmp->val == tmp->next->val)
    {
      ListNode* duplicate = tmp->next;
      tmp->next = tmp->next->next;
      delete duplicate;
    }
    tmp = tmp->next;

  }
  return head;
}

int main()
{
  cout << "\n\n";

  ListNode* head = nullptr;
  addAtEnd(head,1);
  addAtEnd(head,1);
  addAtEnd(head,2);
  addAtEnd(head,3);
  addAtEnd(head,3);
  printLL(head);
  cout<<"removing the duplicates\n";
  head = deleteDuplicates(head);
  printLL(head);

  cout << "\n\n";
  
  return 0;
}