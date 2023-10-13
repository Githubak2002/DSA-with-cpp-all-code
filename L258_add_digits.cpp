// L258 add digits

#include<iostream>
using namespace std;
int findsum(int n){
    int r,sum=0;
    do{
        r = n % 10;
        sum = sum + r;
        n = n/10;
    }while(n/10 != 0);
    return sum;
}
int addDigits(int num){
    int r,sum = 0,temp = -1;


    cout<<"sum is from fun "<<findsum(num);

    //  do{
    //     r = num % 10;
    //     sum = sum + r;
    //     num = num/10;
    // }while(num != 0);

    // if(sum/10 != 0)
    //     addDigits(sum);
    // }while(sum/10 != 0);
       
    // num = sum;
    // }while(num/10 != 0);
       
    // cout<<"\nSum = "<<sum<<"\n";
    
    // cout<<"num/10 = "<<num/10<<endl;
    // cout<<"num%10 = "<<num%10<<endl;
    return 0;
}

int main(){
    cout<<"Function Output 2? = "<<addDigits(38);
    return 0;
}