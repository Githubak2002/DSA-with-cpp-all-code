/*26. Remove Duplicates from Sorted Array

Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int k = 0,i = 0;
    while(i<nums.size()-1){
        if(nums[i] == nums[i+1]){
            i++;
        }
        else{
            nums[k] = nums[i];
            k++;    i++;
        }

    }
    nums[nums.size()-1];
    

    return k;  
}

int main(){
    vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    cout<<"k = "<<removeDuplicates(a)<<endl; 
    for (int i = 0; i < a.size(); i++)
        cout<<a[i]<<" ";
    
    return 0;
}