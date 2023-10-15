// 268. Missing Number - done 100% but sol is slow

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
int missingNumber(vector<int>& nums) {
    int arr_length = nums.size();
    int arraSum = 0;
    int sum = (arr_length*(arr_length+1))/2;
    for (int i = 0; i < arr_length; i++){
        arraSum = arraSum + nums[i];
    }
    cout<<"Array sum = "<<arraSum;
    cout<<"\nsum of n no  = "<<sum;
    return sum-arraSum;
}
int main(){
    vector<int> arr = {4,6,0,1,2,3};
    // vector<int> arr = {0,1};
    // cout<<"\nMissing no = "<<missingNumber(arr);
    sortArr(arr);
    return 0;
}
