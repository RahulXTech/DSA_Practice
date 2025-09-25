#include<iostream>
#include<string>
#include<vector>
using namespace std;

int minimumCoinToChangeTheValues(vector<int>curr, int value){
    int ans = 0;
    for(int i=curr.size()-1; i>=0; i--){
        ans += value/curr[i];
        value = value%curr[i];

    }
    return ans;
}

int main(){
    vector<int>currency = {1,2,5,10,20,50,100,200,500,2000};
    int v = 450;
    cout<<"Minimu currency will be exchase : "<<minimumCoinToChangeTheValues(currency, v);
    return 0;
}