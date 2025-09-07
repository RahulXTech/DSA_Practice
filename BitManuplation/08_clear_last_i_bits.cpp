#include<iostream>
using namespace std;

int clearLastIbits(int num, int i){
   int bitMask = (~0)<<i;
   return num&bitMask;
};

int main(){
    cout<<clearLastIbits(15,2);
    return 0;
}