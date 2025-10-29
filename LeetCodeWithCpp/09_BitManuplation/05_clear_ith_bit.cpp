#include<iostream>
using namespace std;

int clear_ith_bit(int num, int i){
    int bitMask = ~(1<<i);
    return (bitMask&num);
}

int main(){
    cout<<clear_ith_bit(6,1);
    return 0;
}