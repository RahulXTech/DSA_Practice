#include<iostream>
#include<string>
#include<vector>

using namespace std;
int powerFun2(int a, int n){
    int halfPow = powerFun2(a, n/2) * powerFun2(a, n/2);
    if(n%2!=0){
        return halfPow*n;
    }
    cout<<"Total val : "<< halfPow;
    return halfPow;
}
int main(){
int a = 4;
int n = 2;
cout<<powerFun2(a,n);

    return 0;
}