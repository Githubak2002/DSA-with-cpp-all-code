/*    29. Divide Two Integers
 divide two integers without using multiplication, division, and mod operator.

Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.

*/

#include<iostream>
#include<vector>
using namespace std;

int divide(int dividend, int divisor){

    long int dd = abs(dividend), dv = abs(divisor);
    int sum=dv,res=0;
    cout<<"dividend = "<<dividend<<" divisor = "<<divisor<<endl;

    while(sum<=dd){
        sum = sum + dv;
        res++;
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"res = "<<res<<endl;

    if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)){
    res = -res;
    }
    
    return res;
}

int main(){
    
    // cout<<"Result is = "<<divide(7,-3);
    // cout<<"Result is = "<<divide(10,3);  // ++
    // cout<<"Result is = "<<divide(-29,-3);   // --
    cout<<"Result is = "<<divide(-30,3);   // --
    return 0;
}