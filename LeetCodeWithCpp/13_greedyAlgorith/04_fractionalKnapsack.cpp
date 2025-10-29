#include<iostream>
#include<string>
#include<vector>
#include<bits\stdc++.h>
using namespace std;

bool compar(pair<double, int>p1, pair<double, int>p2){
    return p1.first > p2.first;
}

int fractionalKnapsack(vector<int>value, vector<int>weight, int w){
    vector<pair<double, int>>ratio(value.size(), make_pair(0.0,0));
    for(int i =0; i<value.size(); i++){
        double r = value[i]/weight[i];
        ratio[i] = make_pair(r, i);
    }
    sort(ratio.begin(), ratio.end(), compar);
    int ans = 0;
    
    for(int i =0; i<value.size(); i++){
        if(weight[i]<=w){
            ans += value[i];
            w-=weight[i];
        }else{
            ans+= (ratio[i].first * w);
            w+=0;
        }
    }
    return ans;
}

int main(){
 int w = 50;
vector<int>value = {60, 100, 120};
vector<int>weight = {10, 20, 30};

cout<<"Maximum total value is : "<<fractionalKnapsack(value, weight, w);

return 0;
}
