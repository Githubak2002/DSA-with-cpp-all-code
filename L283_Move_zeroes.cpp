/* 283. Move Zeroes
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    cout<<"sorted arr is\n";
    for (int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
}
void moveZeroes(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] == 0)
            nums.pop_back();
        nums.push_back(0);
    }
    
    
}   
int main(){
    vector<int> arr = {0,1,0,3,12};
    // vector<int> arr = {0,1};
    // cout<<"\nMissing no = "<<missingNumber(arr);
    sortArr(arr);
    return 0;
}
