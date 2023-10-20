/*  2099 - not completed 
Find Subsequence of Length K With the Largest Sum

link - https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum


Input: nums = [-1,-2,3,4], k = 3
Output: [-1,3,4]
Explanation: 
The subsequence has the largest sum of -1 + 3 + 4 = 6.

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

vector<int> sortArray(vector<int> arr){
    sort(arr.begin(),arr.end());
    return arr;
}

vector<int> maxSubsequence(vector<int>& nums, int k){
    vector<int> res;
    sort(nums.begin(),nums.end());
    int i = nums.size()-1;
    while(k>0){
        res.push_back(nums[i]);
        i--;
        k--;
    }
    return res;    
}


int main(){
    vector<int> arr = {-1,-2,3,4};    int k = 3;   //[-1,3,4]
    // vector<int> arr = {3,4,3,3,-3,-5,1,4,8};    int k = 3;
    // vector<int> res = sortArray(arr);
    cout<<"Array is\n";
    printarray(arr);
    cout<<"Max subsequence no from array are\n";
    vector<int> res = maxSubsequence(arr,k);
    printarray(res);
    return 0;
}