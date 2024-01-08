// 567. Permutation in String

#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

bool windowFun(string p, string s){
  int part_len = p.length(), s_len = s.length();
  // cout<<part_len<<" "<<s_len<<endl;

  int count = 0;
  for (int i = 0; i <= (s_len-part_len); i++)
  {
    for (int x = 0; x < part_len; x++)
    {
      if(s[i] == p[x])
        count++;
    }
    
  }
  

  return 0;

}
bool checkInclusion(string s1, string s2) {
  // int index = s.find(part);

  int part_len = s1.length(), s_len = s2.length();

  // for (int i = 0; i < (s_len - part_len); i++)
  // {
  //   for (int w = 0; w < part_len; w++)
  //   {
  //     if(s2[i] == s1[w])
  //   }
    
  // }
  
  // cout<<"\nStr len = "<<s_len<<" Part len = "<<part_len<<endl;
  // cout<<"index = "<<index<<endl;

}

int main(){
  cout << "\n\n=======================\n\n";

  cout<<windowFun("hlo","ohl");
  string s1 = "ab";
  string s2 = "eidbaooo";


  cout << "\n=======================";
  return 0;
}
