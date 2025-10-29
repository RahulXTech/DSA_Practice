#include<iostream>
#include<string>
//LeetCOde
// https://leetcode.com/problems/fibonacci-number/
using namespace std;

int FibonacciNum(int n){
    if(n==1 || n==0){
        return n;
    }
return FibonacciNum(n-1) + FibonacciNum(n-2);
};

int main(){
cout<<FibonacciNum(10);
    return 0;
}