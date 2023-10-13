// 1207 Unique Number of Occurrences
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
    bool uniqueOccurrences(vector<int>& arr) {
            sort(arr.begin(),arr.end());
            vector<int> ans;
            int count = 1,high=0;
            for (int i=0 ; i < arr.size()-1; i++){ 
                if(arr[i]==arr[i+1]){
                    count++;
                }
                else{
                    ans.push_back(count);
                    count = 1;
                }
            }
            ans.push_back(count);
            for(int b = 0; b < arr.size();b++)
                cout<<arr[b]<<" ";
            
            cout<<"\n";
            for(int o = 0; o < ans.size();o++)
                cout<<ans[o]<<" ";
            cout<<"\n";
            sort(ans.begin(),ans.end());
            for(int i = 0; i < ans.size()-1;i++)
                if(ans[i]==ans[i+1])
                    return false;

            return true;
            // return false;
        }
int main(){
    vector<int> arr = {1,22,22,333,333,333,6,6,6,6};
    
    cout<<"result = "<<uniqueOccurrences(arr);
    return(0);
}   