// fibonacci series - 0,1,1,2,3,5,8,13,...

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  cout<<"\n\n==============\n";
  cout<<"enter n : ";
  int n,i=0,j=1,no=2,x = 0;

  unsigned uns = 3;
  cout<<"\nunsigned 3 = "<<uns;
  cin>>n;

  cout<<"\nFibonacci series\n";
  if(n >= 1){
    cout<<0<<" ";
  }
  if(n >= 2){
    cout<<1<<" ";
  }
  while(no<n){
    x = i+j;
    cout<<x<<" ";
    ++no;
    i = j;
    j = x;
  } 

  return 0;
}
