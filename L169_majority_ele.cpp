/* L169. Majority Element
 Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
*/

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    cout<<"ele of arr are\n";
    for (int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }cout<<"\n";
    
}
int main(){
    vector<int> arr = {3,2,3};
    return 0;
}