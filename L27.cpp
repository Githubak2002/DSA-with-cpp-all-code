/*  27. Remove Element [98% did by myself then copied]

Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }

int main(){
    // vector<int> a = {0,1,2,2,3,0,4,2};
    vector<int> a = {3,2,2,3};
    // vector<int> a = {0,1,2,2,2,2,3,4,4,5,6,7,7,7,8};
    cout<<"k = "<<removeElement(a,2)<<endl; 

    for (int i = 0; i < a.size(); i++)
        cout<<a[i]<<" ";

    // swap(a[0],a[1]);
    // cout<<"\n";
    // for (int i = 0; i < a.size(); i++)
    //     cout<<a[i]<<" ";
    
    return 0;
}