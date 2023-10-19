/*  441. Arranging Coins

link - https://leetcode.com/problems/arranging-coins/

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// int arrangeCoins(int n) {
//     int sum = 0, i = 0,stairs = 0;
//     while(sum<=n){
//         i++;
//         sum = sum + i;
//         stairs += 1; 
//         cout<<"stairs "<<sum<<"\n";
//     }
//     return stairs-1;
    
// }

int arrangeCoins(int n){
    int i = 0,x = 1;
    while(x<=n){
        i++;
        x = (i*(i+1))/2;
    }
    return i-1;
    
}

int main(){
    int n = 8;
    cout<<"Output = "<<arrangeCoins(n);
    return 0;
}