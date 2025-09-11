#include<iostream>
using namespace std;

//It will be work logn time complexcity.
int fastExponentiation(int x, int n){
    int ans = 1;
    while(x>0){
        int lastDigit = n&1;
        if(lastDigit){
            ans = ans * x;
        }
        x = x * x;
        n = n>>1;
    }
    return ans;
}

int main(){
    cout<<fastExponentiation(3,5);
    return 0;
}