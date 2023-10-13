// 35 search insert position
// search the target ele or position where it can be insertd (arr_index) using binary search complexity (logn)

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int i,high,mid,pos = -1;
        i = 0;
        high = nums.size()-1;
        mid = (i+high)/2;

        // if(target<nums[i])
        //     return 0;
        // if(target>nums[high])
        //     return nums.size();
            
        while(i<=high){
            mid = (i+high)/2;
            // if(nums[mid]<target)
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target){
                i = mid+1;
            }
            else{
                high = mid-1;
                // pos = mid;
            }
        }
        return i;
}
int main(){
    
    vector<int> arr = {2,4,6,8,10,12};
    cout<<"\n\nThe inserting position will be = "<<searchInsert(arr,17);

    // vector<int> arr1 = {0,1,2,3,4,5,6,7};
    // cout<<"\n\nThe position = "<<searchInsert(arr,9);

    cout<<"\n\n\n";
    return 0;
}