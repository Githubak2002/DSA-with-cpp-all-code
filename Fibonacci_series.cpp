// fibonacci series - 0,1,1,2,3,5,8,13,...

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  cout<<"\n\n==============\n";
  cout<<"enter n : ";
  int n,i=0,j=1,no=2,x = 0;
  cin>>n;

  cout<<"\nFibonacci series\n";
  if(n >= 1){
    cout<<0<<endl;
  }
  if(n >= 2){
    cout<<1<<endl;
  }
  while(no<n){
    x = i+j;
    cout<<x<<endl;
    ++no;
    i = j;
    j = x;
  } 

  return 0;
}
