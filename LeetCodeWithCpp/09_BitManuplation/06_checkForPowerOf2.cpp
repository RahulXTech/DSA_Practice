#include<iostream>
using namespace std;

int checkPowerOf2(int num){
    if(!((num)&(num-1))) return 1;
    else return 0;
}

int main(){
    cout<<checkPowerOf2(2)<<endl;
    cout<<checkPowerOf2(4)<<endl;
    cout<<checkPowerOf2(8)<<endl;
    cout<<checkPowerOf2(16)<<endl;
    cout<<checkPowerOf2(32)<<endl;
    cout<<checkPowerOf2(64)<<endl;
    cout<<checkPowerOf2(11)<<endl;
    cout<<checkPowerOf2(101)<<endl;
    return 0;
}