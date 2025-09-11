#include<iostream>
using namespace std;

int countSetBits(int num){
    int coutn = 0;
    while(num>0){
        int lastDigit = num&1;
        coutn += lastDigit;
       num = num>>1;
    }
    return coutn;
}

int main(){
    
    cout<<countSetBits(15)<<endl;
    cout<<countSetBits(7)<<endl;
    cout<<countSetBits(1)<<endl;

    return 0;
}