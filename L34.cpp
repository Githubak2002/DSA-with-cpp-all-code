/* 34. Find First and Last Position of Element in Sorted Array → copied [100%]
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

int findFirst(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int first = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            if (mid == 0 || nums[mid - 1] != target) {
                first = mid;
                break;
            }
            else {
                right = mid - 1;
            }
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return first;
}

int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int last = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                    last = mid;
                    break;
                }
                else {
                    left = mid + 1;
                }
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return last;
    }

vector<int> searchRange(vector<int>& nums, int target) {
    int first = findFirst(nums, target);
    int last = findLast(nums, target);
    return {first, last};
}

void arris(vector<int>& arr){
    cout<<"Give array ele are\n";
    for (int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
}

int main(){
    vector<int> resultarr, arr = {1};
    // vector<int> resultarr, arr = {5,7,7,8,8,10};
    arris(arr);
    resultarr = searchRange(arr,1);
    cout<<"\nResult array \n";
    for (int i = 0; i < 2; i++)
        cout<<resultarr[i]<<" ";

    return 0;
}