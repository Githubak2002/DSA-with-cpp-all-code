/*  74. Search a 2D Matrix  */

#include<iostream>
#include<vector>
// #include<string>
using namespace std;

void printMatrix(vector<vector<int>>&arr){
    cout<<"array ele are\n";
    int rows = arr.size(); 
    int cols = (rows > 0) ? arr[0].size() : 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
}
// my code worked in first Submit - but NOT OPTIMIZED
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int start,end,mid;
    int rows = matrix.size(); 
    int cols = (rows > 0) ? matrix[0].size() : 0;
    // cout<<"rows = "<<rows<<" col = "<<cols<<endl;
    
    for (int i = 0; i < rows; i++){

        if(matrix[i][0]<=target && matrix[i][cols-1]>=target){
            start = 0;
            end = cols-1;
            cout<<"start = "<<start<<" end = "<<end<<endl;
            while(start<=end){
                mid = start + (end - start)/2;
                if(matrix[i][mid]==target){
                    cout<<"[ "<<i<<" "<<mid<<" ]"<<endl;
                    return true;
                }
                else if(matrix[i][mid] < target)
                    start = mid + 1;
                else    
                    end = mid - 1;
            }
            break;
        }        
        
    }
    return false;
}



int main(){

    // vector<vector<int>> arr(3, vector<int>(3));
    vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};

    printMatrix(arr);
    int target = 16;
    cout<<"Target ele "<<target<<" is present? "<<searchMatrix(arr,target);
    
    
    return 0;
}


/* OPTIMIZE CODE
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = m * n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid / n][mid % n];

            if (mid_val == target)
                return true;
            else if (mid_val < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
*/