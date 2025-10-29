#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

void stockSpam(vector<int>prices){
    stack<int>s;
    vector<int>ans(prices.size(), 0);
    for(int i =0; i<prices.size(); i++){
        while(s.size()>0 && prices[s.top()] <= prices[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=i+1;
        }else{
            ans[i] = i-s.top();
        }
            s.push(i);
    }
    //print answers
    for(int val : ans){
        cout<<val<<endl;
    }
};

int main(){
vector<int>price = {100, 80, 60, 70, 60, 75, 85};
stockSpam(price);
    return 0;
}