// binary to decimal
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // cout<< "Hello world !\n";
    // cout<<"7&3 = "<<(7&3);

    int n;     
    cout<<"Enter a no in binary form\n"; 
    cin>>n;
    
    // the no entered here is treated as integer
    // if n = 1;    [ then n= 000000....1 ]
    
    int d=0,i=0,digit; 
    while(n!=0){
        digit = n%10;
        if(digit == 1){
            d = pow(2,i) + d;
        }
        ++i;
        n = n/10;
    }
    cout<<endl<<d;

    cout<<"\n\n\n";
    return 0;
}