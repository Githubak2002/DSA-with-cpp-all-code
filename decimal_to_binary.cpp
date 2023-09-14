// decimal to binary convertion
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter a no \n"; 
    cin>>n;
    int ans=0,i=0,bit; 
    while(n!=0){
        bit = n&1;
        ans = (pow(10,i)*bit) + ans;
        i++;
        n = n>>1;
    }
    cout<<"\n"<<ans;

    cout<<"\n\n\n";
    return 0;
}