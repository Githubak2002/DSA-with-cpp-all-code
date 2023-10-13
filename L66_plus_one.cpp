// not even started
// 66. Plus one [Easy]

// Increment the large integer by one and return the resulting array of digits.

// Example 1:
// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printarr(vector<int>arr){
    for(int b = 0; b < arr.size();b++)
        cout<<arr[b]<<" ";
    cout<<"\n";
}

vector<int> plusOne(vector<int>& digits) {
    vector <int> temp;
    int i = digits.size()-1,carry = 0,con = 0;

    for(i; i>=0;i--){
        if(digits[i] == 9 ){
            carry = 1;
            temp.insert(temp.begin(),0);
        }
        else if(digits[i] != 9 && con == 0){
            // cout<<"i = "<<i<<"\n";
            temp.insert(temp.begin(),digits[i]+1);
            con=1;
        }
        else
            temp.insert(temp.begin(),digits[i]);
    }
    if(con == 0)
        temp.insert(temp.begin(),1);

    return temp;     
}




int main(){
    vector<int> arr = {9,9,9};
    // vector<int> res = findDuplicates(arr);
    // vector<int> temp = {0,4,5};
    // cout<<temp.max_size();
    
    // printarr(arr);
    vector <int> a = plusOne(arr);
    printarr(a);
    
    return(0);
}   