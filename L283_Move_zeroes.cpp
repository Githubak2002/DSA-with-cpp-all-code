/* 283. Move Zeroes
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// sort(a[4],a[3]);   in algorithm header file

void printarray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// My code working but time and space consuming
void moveZeroes(vector<int>& nums) {
    int x = nums.size(),nonzeroindex;
    for (int i = 0; i < nums.size()-1; i++){
        nonzeroindex = -1;
        if(nums[i]==0){
            // x -= 1;
            for (int k = i+1; k < nums.size(); k++){
                if(nums[k] != 0){
                    nonzeroindex = k;
                    break;
                }
            }
            if(nonzeroindex != -1)
            {
                int t = nums[i];
                nums[i] = nums[nonzeroindex];
                nums[nonzeroindex] = t;
            }
            
            
        }
    }  
}  


int main(){
    // vector<int> arr = {0,1,0,3,12};
    // vector<int> arr = {5,6,3,0,9,8,1,0,8,0,5,0};
    vector<int> arr = {0,0,1};
    cout<<"\nArray is \n";
    printarray(arr);
    moveZeroes(arr);
    cout<<"\narray after shifting zero"<<endl;
    printarray(arr);
    // sortArr(arr);
    return 0;
}
