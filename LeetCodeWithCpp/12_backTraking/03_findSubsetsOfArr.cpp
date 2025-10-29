#include<bits/stdc++.h>
using namespace std;
void printSubsets(const vector<int>&arr){
    for(int x : arr)cout<<x<<" ";
    cout<<endl;
}

void subsetscall(vector<int>&arr, vector<int>&subset, int index){
    if(index == arr.size()){
        printSubsets(subset);
        return;
    }
    subset.push_back(arr[index]);
    subsetscall(arr, subset, index+1);

    subset.pop_back();
    subsetscall(arr, subset, index+1);
}

int main(){
vector<int>arr = {1,2,3};
vector<int>subarr = {};
subsetscall(arr, subarr, 0);

    return 0;
}