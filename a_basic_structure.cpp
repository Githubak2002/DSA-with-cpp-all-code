// 263. Ugly Number

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

int main(){
  cout<<"\n\n==============\n";
  // cout<<"Upper case"<<endl;
  char ch = 'Z';
  cout<<"LowerCase of "<<ch<<" is = "<<toLowerCaseFun(ch);
  return 0;
}


void printarray(vector<int> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

char toLowerCaseFun(char ch){
  if(ch >= 'a' && ch <= 'z')
    return ch;
  else
    return ch+32;
}


// int main(){
    
//     return 0;
// }