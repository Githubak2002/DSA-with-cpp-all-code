// 1st program using vector in c++ [daynamic array]
// all vector function 
// - v.size() - v.push_back()
// itrator ?
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v1; 
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    cout<<"\nUsing simple for loop\n";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    
    v1.pop_back();
    cout<<"\nUsing auto ele:vector_name\n";
    for(auto ele:v1)
        cout<<ele<<" ";


    cout<<"\n\n\n";
    return 0;
}