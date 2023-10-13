// 1st program using vector in c++ [daynamic array]
// all vector function 
// - v.size() - v.push_back() - v.pop_back() - v.begin() - v.end()
// itrator ?
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

    // ----- VECTOR intilization -----

    // ----- PUSH and POP function -----
    vector<int> v1; 
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    // ----- itrator ----- is an obhigh used to traverse vector,arr,list...

    // cout<<"\nUsing ITRATOR\n";
    // vector<int>::iterator it;
    // for(it=v1.begin();it!=v1.end();it++)
    //     cout<<*it<<" ";
    
    v1.pop_back();

    // cout<<"\nUsing auto ele:vector_name\n";
    // for(auto ele:v1)
    //     cout<<ele<<" ";


    // ---------- SWAP function ----------
    vector<int> v2 (3,99);

    cout<<"Before SWAP\n";
    cout<<"Ele of vector v1\n";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    cout<<"\nEle of vector v2\n";
    for(int i =0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    swap(v1,v2);
    cout<<"\nAfter SWAP\n";
    cout<<"Ele of vector v1\n";
    for(auto ele:v1){
        cout<<ele<<" ";
    }
    cout<<"\nEle of vector v2\n";
    for(auto ele:v2){
        cout<<ele<<" ";
    }

    // ---------- SORT ----------
    vector<char> char_v = {'b','e','d','a','c','f'};
    cout<<"\n\nChar vector Before sort\n";
    for (auto ch : char_v)
        cout << ch << " ";
    
    sort(char_v.begin(),char_v.end());
    cout<<"\nAfter sort\n";
     for (auto ch : char_v) {
        cout << ch << " ";
    }

    cout<<"\n\n\n";
    return 0;
}
