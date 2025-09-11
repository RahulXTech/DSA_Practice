#include <bits/stdc++.h>
using namespace std;

double powerFun(double a, double n){
    if(n == 0) return 1;
    return a * powerFun(a, n-1);
}

int main(){
    double a,n;
    cout<<"Enter the a value : ";
    cin>>a;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<powerFun(a,n);
    return 0;
}