/*  204. Count Primes [copied]

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int isPrime(int n){
    for (int i = 2; i < n; i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
    
}
int countPrimes(int n){
    if(n == 0 || n == 1 || n == 2)
        return 0;
    int primCount = 0,primehai = 0;
    for (int i = 2; i < n; i++){
        primehai = -1;

        for (int j = 2; j < i; j++){
            if(i%j == 0){
                // cout<<i<<" is not prime \n";
                primehai = 0;   break;
            }
        }

        if(primehai != 0){
            primCount += 1;
            // cout<<i<<" is prime \n";
        }
        // else{
        // }
    }
    
    return primCount;
}


int main(){
    int n = 499979;
    // cout<<"is prime "<<isPrime(0);
    cout<<"\nno of prime numbers are "<<countPrimes(n);
    return 0;
}