#include<iostream>
using namespace std;

int set_ith_bit(int num, int i){
    int bit_mask = 1<<i;

    return num|bit_mask;
}


int main(){
cout<<set_ith_bit(6,3);

    return 0;

}