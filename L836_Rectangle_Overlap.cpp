// 836. Rectangle Overlap

#include <iostream>
#include <vector>
using namespace std;

// cpied
bool isRectangleOverlap(vector<int> &rect1, vector<int> &rect2)
{
  int fx1 = rect1[0];
  int fx2 = rect1[2];
  int fy1 = rect1[1];
  int fy2 = rect1[3];

  int sx1 = rect2[0];
  int sx2 = rect2[2];
  int sy1 = rect2[1];
  int sy2 = rect2[3];

  return !((sy1 >= fy2) ||
           (fy1 >= sy2) ||
           (fx1 >= sx2) ||
           (fx2 <= sx1));
}

// my code not working properly
bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2)
{

  int x1 = rec1[0], y1 = rec1[1];
  int x2 = rec1[2], y2 = rec1[3];
  int nx1 = rec2[0], ny1 = rec2[1];
  int nx2 = rec2[2], ny2 = rec2[3];

  // cout<<"x1,y1 = "<<x1<<","<<y1<<endl;
  // cout<<"x2,y2 = "<<x2<<","<<y2<<endl;
  // cout<<"nx1,ny1 = "<<nx1<<","<<ny1<<endl;

  // cout<<"(nx1 > x1 && nx1 < x1) = "<<(nx1>x1 && nx1<x2)<<endl;
  if ((nx1 >= x1 && nx1 < x2) && (ny1 >= y1 && ny1 < y2))
    return true;
  else if ((nx2 > x1 && nx2 <= x2) && (ny2 = y1 && ny2 <= y2))
    return true;

  return false;
}

int main()
{
  cout << "\n\n=======================\n\n";

  vector<int> rec1 = {7, 8, 13, 15};
  vector<int> rec2 = {10, 8, 12, 20};

  vector<int> rec3 = {2, 17, 6, 20};
  vector<int> rec4 = {3, 8, 6, 20};

  cout << "overlap = " << isRectangleOverlap(rec3, rec4) << endl;

  cout << "\n\n=======================";
  return 0;
}

