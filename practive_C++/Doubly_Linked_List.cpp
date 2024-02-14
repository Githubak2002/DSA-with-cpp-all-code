// 

#include <iostream>
#include <math.h>
using namespace std;

class myclass{
  public: 
  int age = 22;
  char favVhar = 'A';

  myclass(){
    cout<<"1st Constructor called\n";
  }
  ~myclass(){
    cout<<"~Destructor of 1st\n";
  }
};

class class2{
  public: 
  int age;
  char favVhar = 'F';

  class2(){
    cout<<"\n2nd Constructor called\n";
  }
  ~class2(){
    cout<<"~2nd Destructor called \n";
    cout<<"Age is -> "<<this->age<<endl;
  }
};


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
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory if free for node with data = "<<value<<endl;
    }
};

/*
// INSERTION no implimentation of tail
void printLL(node *head)
{  
    node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->"<< "NULL" << endl;
}

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
    node *nextPos;

    while (initialpos < position - 1)
    {
        initialpos++;
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}


// DELETION
void deletePos(int position, node* &head){
    node* currNode = head;
    node* prevNode;
    if(position == 1){
        head = head->next;
        currNode->next = NULL;
        delete currNode;
        return;
    }
    int pos = 1;
    while(pos < position){
        prevNode = currNode;
        currNode = currNode->next;
        pos++;
    }
    if(currNode->next == NULL)
        prevNode->next = NULL;
    else
        prevNode->next = currNode->next;
    currNode->next = NULL;
    delete currNode;
}
*/

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

    myclass obj1;
    cout<<"Age of obj1 = "<<obj1.age<<endl;
    cout<<"FavChar of obj1 = "<<obj1.favVhar<<endl;

    class2* obj2 = new class2;
    obj2->age = 30;
    cout<<"Age of obj2 = "<<obj2->age<<endl;
    cout<<"FavChar of obj2 = "<<obj2->favVhar<<endl;
    delete obj2;

    cout << "\n\n";
    return 0;
}
