/*  136
Single Number

Input: nums = [4,1,2,1,2]
Output: 4
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printarray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int singleNumber(vector<int>& nums) {
        int x = nums[0];
        if(nums.size() > 1){
            for (int i = 1; i < nums.size(); i++){
                x = (x^nums[i]);
            }
        }
        return x;
}

int main(){
    // vector<int> arr = {4,1,2,1,2};
    // vector<int> arr = {2,2,1};

    vector<int> arr = {4,4,6,88,7,6,1,8,21,7,8,21,12,87,88,87,12};
    cout<<"Array is\n";
    printarray(arr);
    cout<<"\nElement appears once = "<<singleNumber(arr);

    // cout<<" 2 XOR 6 = "<<(2^6);
    return 0;
}