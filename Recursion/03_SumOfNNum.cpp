#include<iostream>
#include<string>
using namespace std;


int SumOfNNum(int n){
if(n == 0) return 1;

    return n + SumOfNNum(n - 1);
};



int main(){

cout<<SumOfNNum(4);
    return 0;
}