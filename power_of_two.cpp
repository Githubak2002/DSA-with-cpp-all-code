#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a no\n";
    cin>>n;
    int flag=0,ans=1,i=1;
    for(i;i<=30;i++){
        if(n == ans){
            flag = 1;
            cout<<"is a power of 2\n";
        }
        ans = ans*2;
    }
    if(flag == 0)
        cout<<"\nno is not ^ of 2";

    cout<<"\n\n";
    return 0;
}