#include<iostream>
#include<string>
using namespace std;

int get_ith_bit(int num, int i){
    int  bitMask = 1<<i;
    if(!(num&bitMask)){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int num = 6;
    int i = 2;
    cout<< get_ith_bit(num, i);

    return 0;
}