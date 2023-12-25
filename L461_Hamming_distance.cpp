/* 461. Hamming Distance

Example 1 -

Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.

*/  
  


#include<iostream>
#include<algorithm>
using namespace std;

int hammingDistance(int x, int y) {
  int res = x ^ y;
  int hd = 0,temp = res;
  if(x==y)
    return 0;
  while(temp/2 != 0){
    cout<<temp<<endl;
    if(temp%2 == 1)
      ++hd;
    temp = temp/2;
  }
  return hd+1;
}

int main(){
    // int n1 = 1,n2 = 4;
    int n1 = 8,n2 = 15;
    int res = n1 ^ n2;
    cout<<"BIT manipulation of n1 ^ n2 = "<< res;

    cout<<"\n === Hamming Distance  === \n";
    int hd = 0,temp = res;
    while(temp/2 != 0){
      cout<<temp<<endl;
      if(temp%2 == 1)
        ++hd;
      temp = temp/2;
    }
    cout<<"Hamming dis = "<<hd+1;


    cout<<"\n\nHD of 5,5 = "<<hammingDistance(5,5); 
    
    
    

    return 0;
}
