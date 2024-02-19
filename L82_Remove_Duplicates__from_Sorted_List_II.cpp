// 82. Remove Duplicates from Sorted List II


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
  ListNode* ptr = head;
  ListNode* prev = head;
  int value ;
  while (ptr != NULL)
  {
    cout<<"val = "<<ptr->val<<endl;
    value = ptr->val;
    if(value == ptr->next->val)
    {
      cout<<"value = "<<value<<" val = "<<ptr->val<<endl;
      
      while(value == ptr->val){
        // ListNode* duplicate = ptr;
        ptr = ptr->next;
        // delete duplicate;
      }
    // cout<<"prev -> val = "<<prev->val<<endl;

      
      prev->next = ptr;
      // cout<<"ptr->val = "<<ptr->val<<endl;

    }
    prev = ptr;
    ptr = ptr->next;
    cout<<"ptr->/next = "<<ptr->next<<endl;


  }
  cout<<"ho gaya"<<endl;
  return head;
}


int main()
{
  cout << "\n\n";

  ListNode* head = nullptr;
  addAtEnd(head,1);
  addAtEnd(head,2);
  addAtEnd(head,3);
  addAtEnd(head,3);
  addAtEnd(head,4);
  // addAtEnd(head,4);
  addAtEnd(head,5);
  printLL(head);
  cout<<"removing the duplicates\n";
  head = deleteDuplicates(head);
  cout<<"head->val"<<head->val<<endl;
  printLL(head);

  cout << "\n\n";
  
  return 0;
}