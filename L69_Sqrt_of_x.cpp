// L 69. Sqrt(x)
/*
Example 1:
Input: x = 4
Output: 2
 
Example 2:
Input: x = 8
Output: 2
*/

#include<iostream>
#include<vector>
using namespace std;


void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
      cout<<arr[i]<<" ";    
}

int mySqrt(int x) {
  if(x==0)
    return 0;

  float mid,ans; 
  int s = 1,e = x;

  while(s<=e){
    mid = s + (e-s)/2;
    if((mid*mid) == x)
      return mid;
    else if(mid*mid > x){
      e = mid - 1;
      ans = mid;
    }
    else
      s = mid + 1;
  }

  // cout<<"\n s = "<<s<<" e = "<<e<<endl;
  // if( (mid*mid)>x ){
  //   // cout<<endl<<mid-1<<endl;
  //   return mid-1;
  // }

  return ans;
}


int main(){
  cout<<"\n\n==============\n";
  int n = 2147395599;
  cout<<"\nSquare root of "<<n<<" is "<<" = "<<mySqrt(n)<<endl;

  // 46440

  // vector<int> arr(1,6);
  // printarray(arr);

  return 0;
}









// ======================

class Solution {
public:
    int mySqrt(int x) {
    if(x==0)
        return x;

    int s = 1,e = x;
    float ans = -1; 
    long long int square,mid;

    while(s<=e){
        mid = s + (e-s)/2;
        square = mid * mid;
        if(square == x)
            return mid;
        if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
    }
};