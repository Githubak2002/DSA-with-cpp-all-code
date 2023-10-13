// 50. Pow(x, n)
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

#include<iostream>
using namespace std;

double myPow(double x, int n){
        int flag = 0;
        double result=1;
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n<0){
            flag = 1;
            n = n*(-1);
        }
        while(n>0){
            result = x*result;
            --n;
        }
        if(flag==1){
            return 1/result;
        }
        return result;
    }

int main(){
    cout<<"Result of x^n = "<<myPow(2,-2);
    return 0;
}