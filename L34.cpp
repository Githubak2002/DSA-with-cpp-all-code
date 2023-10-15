/* 34. Find First and Last Position of Element in Sorted Array
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void arris(vector<int>& arr){
    cout<<"Give array ele are\n";
    for (int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
}

vector<int> searchRange(vector<int>& nums, int target) {
    int start = 0,end = nums.size()-1;
    int mid,startIndex = -1,endIndex = -1;
    cout<<"\nEntered the fun \n";
    cout<<"Start = "<<start<<" end = "<<end<<"\n";
    while(start <= end){
        mid = start+(end-start)/2;
        if(nums[mid] == target){
            // cout<<"target = "<<mid; 
            startIndex = mid;
            if(nums[startIndex+1] == target)
                endIndex = startIndex+1;
            else if(nums[startIndex-1] == target){
                endIndex = startIndex;
                startIndex = startIndex - 1;
            }
            // cout<<" startindex "<<startIndex<<endl;
            // cout<<" endindex "<<endIndex<<endl;
            break;
        }
        else if(nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if(startIndex != -1 && endIndex == -1)
        endIndex = startIndex;
    vector<int> resArr = {startIndex,endIndex};

    return resArr;
}

int main(){
    vector<int> resultarr, arr = {1};
    // vector<int> resultarr, arr = {5,7,7,8,8,10};
    arris(arr);
    resultarr = searchRange(arr,1);
    cout<<"result array \n";
    for (int i = 0; i < 2; i++)
        cout<<resultarr[i]<<" ";

    return 0;
}