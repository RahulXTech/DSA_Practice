#include<iostream>
#include<string>
#include<vector>

using namespace std;
int Stock(vector<int>prices){
        int maxProfit = 0, bestBuy = prices[0];

        for(int i =1; i<prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
}

int main(){
    vector<int>prices = {3,5,7,4,8,1,8};
    cout<<"your max profit is: "<<Stock(prices)<<endl;
    return 0;
}