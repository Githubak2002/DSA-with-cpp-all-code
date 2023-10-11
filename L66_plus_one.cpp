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
    // int x = digits.size();
    // cout<<"Last digit is "<<x<<endl; //3
    vector <int> temp;
    for(int i = digits.size()-1; i>=0;i--){
        if(digits[i] == 9){
            temp.insert(temp.begin(),0);
        }
    }
        

        cout<<"\n\n";
    printarr(digits);
    return digits;     
}




int main(){
    vector<int> arr = {1,2,3};
    // vector<int> res = findDuplicates(arr);
    // vector<int> temp = {0,4,5};
    // cout<<temp.max_size();
    
    // printarr(arr);
    vector <int> a = plusOne(arr);
    printarr(a);
    
    return(0);
}   