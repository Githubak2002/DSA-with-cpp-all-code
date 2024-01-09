// 443. String Compression

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

void printarray(vector<char> arr){
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i]<<" ";    
  cout<<endl;   
}

int compress(vector<char>& chars){
  int ansIndex = 0,i = 0,count;
  int n = chars.size();

  while(i<n){

    int j = i+1;
    while(j<n && chars[i] == chars[j]){
      j++;
    }
    count = j-i;
    chars[ansIndex++] = chars[i];
    if(count>1){
      string s = to_string(count);
      for(char ch : s){
        chars[ansIndex++] = ch;
      }
    }

    i = i+count;
  }

  return ansIndex;
}

int main(){
  cout << "\n\n=======================\n\n";

  vector<char> charArr1 = {'a','a','b','b','c','c','c'};
  vector<char> charArr = {'a','b','b','c','c','c'};
  printarray(charArr);
  cout<<"res = "<<compress(charArr)<<endl;
  printarray(charArr);


  cout << "\n=======================";
  return 0;
}