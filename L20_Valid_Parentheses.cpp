// 20. Valid Parentheses

#include <iostream>
#include <stack>
using namespace std;

void printStk(stack<int> stk){
  cout<<"\nStack is = ";
  while(!stk.empty()){
    char ele = stk.top();
    cout<<ele<<" ";  
    stk.pop();
  }cout<<"\n";
}

bool isValid(string s)
{
  stack<int> stk;
  int len = s.length();
  int i = 0;
  while(i < len){
    if(s[i] == '(' || s[i] == '{' || s[i] == '['){
      stk.push(s[i++]);
    }
    else{
      char ele = s[i++];
      if(ele == ')' && stk.top() == '(')
        stk.pop();
      else if(ele == ']' && stk.top() == '[')
        stk.pop();
      else if(ele == '}' && stk.top() == '{')
        stk.pop();
      else
        return false;
    }
    // printStk(stk);
    
  }  
  return stk.empty();
}
int main()
{
  cout << "\n\n=======================\n\n";

  string s1 ="{[(";
  string s ="{[]}{{[()]}}";
  cout<<"\nparenthisis valid ? "<<isValid(s)<<endl;


  cout << "\n\n=======================";
  return 0;
}