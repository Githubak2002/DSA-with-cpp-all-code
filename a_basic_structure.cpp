// 263. Ugly Number

#include<iostream>
#include<algorithm>
using namespace std;

bool isUgly(int n) {
    n = abs(n);
    if(n == 1 || n== 0)
        return true;
    
}

int main(){
    int n = 6;
    cout<<"is Ugly "<<isUgly(n);
    return 0;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void printarray(vector<int> arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

// int main(){
    
//     return 0;
// }