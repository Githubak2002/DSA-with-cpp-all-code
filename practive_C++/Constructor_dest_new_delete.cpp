// Constructor ,destructor, new and delete
// Constructor can be overloaded but cant be inherated or virtual
// new keywor is used to dynamically allocate memory in heap not in stack
// destructor - no parameter

// If an obj is intilized dynamically using new keyword then it can be oly be deleted using delete keyword only to free up memory

#include <iostream>
#include <math.h>
using namespace std;

class myclass
{
public:
  int age = 22;
  char favVhar = 'A';

  myclass()
  {
    cout << "1st Constructor called\n";
  }
  ~myclass()
  {
    cout << "~Destructor of 1st\n";
  }
};

class class2
{
public:
  int age;
  char favVhar = 'F';

  class2()
  {
    cout << "\n2nd Constructor called\n";
  }
  ~class2()
  {
    cout << "~2nd Destructor called \n";
    cout << "Age is -> " << this->age << endl;
  }
};

int main()
{
  cout << "\n\n";

  myclass obj1;
  cout << "Age of obj1 = " << obj1.age << endl;
  cout << "FavChar of obj1 = " << obj1.favVhar << endl;

  class2 *obj2 = new class2;
  obj2->age = 30;
  cout << "Age of obj2 = " << obj2->age << endl;
  cout << "FavChar of obj2 = " << obj2->favVhar << endl;
  delete obj2;

  cout << "\n\n";
  return 0;
}
