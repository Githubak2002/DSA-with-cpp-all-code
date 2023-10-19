
/* 448. Find All Numbers Disappeared in an Array

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
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

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> res (nums.size(),false);
    vector<int> result;

    cout<<"initally res arr is\n";
    printarray(res);    cout<<"\n";

    int index = 0;
    // res[1] = true;
    // cout<<nums[0];
    for (int i = 0; i < nums.size(); i++){
        int index = nums[i];
        res[index-1] = true;
    }
    cout<<"arr res after\n";
    printarray(res);    cout<<"\n";
    for (int x = 0; x < res.size(); x++)
    {
        if(res[x] == false){
            cout<<"index = "<<x<<endl;
            result.push_back(x+1);
        }
            
    }

    
    return result;
}

int main(){
    
    // vector<int> a = {4,3,2,7,8,2,3,1};
    vector<int> a = {1,12,11,2,2,3,4,3,4,3,4,5};
    // vector<int> a = {1,1};
    cout<<"given array is \n";
    printarray(a);
    cout<<"\n";

    vector<int> res;

    res = findDisappearedNumbers(a);
    cout<<"\n\nFinal result arr = ";
    printarray(res);
    return 0;
}