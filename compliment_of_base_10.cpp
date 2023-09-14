// 1--% correct
// for example, The integer 5 is "101" in binary and 
// its complement is "010" which is the integer 2.
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int m,n,temp=0;
    cout<<"Enter a no \n"; 
    cin>>n;
    m=n;

    while(m!=0){
        temp = (temp<<1)|1;
        m = m>>1;
    }
    int res = (~n)&temp;
    cout<<res;
    

    cout<<"\n\n\n";
    return 0;
}