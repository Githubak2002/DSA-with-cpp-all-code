// L258 add digits

#include<iostream>
using namespace std;

int findsum(int n){
    int r,sum=0;
    while(n!=0){
        r = n % 10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}

int addDigits(int num){
    int sum;
    sum = findsum(num);
    while(sum>=10){
        sum = findsum(sum);
    }
    return sum;
}

int main(){
    // cout<<"Sum of the digits "<<findsum(2);
    cout<<"The final single digit no is = "<<addDigits(88);
    return 0;
}