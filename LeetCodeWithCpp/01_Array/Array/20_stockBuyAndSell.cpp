#include<iostream>
#include<string>
#include<vector>
using namespace std;

int maxProfit(vector<int>prices){
    int mini = prices[0];
    int maxPrice = 0;

    for(int i=1; i<prices.size(); i++){
        int cost = prices[i]-mini;
        maxPrice = max(maxPrice, cost);
        mini = min(mini, prices[i]);
    }
    return maxPrice;
}

int main(){
    vector<int>Prices = {7,1,5,3,6,4};
    cout<<maxProfit(Prices);

    return 0;
}