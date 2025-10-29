#include<iostream>
#include<string>
#include<vector>
#include<bits\stdc++.h>
using namespace std;
// bool compair(pair<int , int>p1, pair<int , int>p2){
//     return p1.second < p2.second;
// }

// int totalAbsoluteDifference(vector<int>arr1, vector<int>arr2){
//     vector<pair<int, int>>pairs(arr1.size(), make_pair(0,0));
//     for(int i=0; i<arr1.size(); i++){
//         pairs[i] = make_pair(arr1[i], arr2[i]);
//     }
// }



int main(){
    vector<int>arr1 = {4,1,8,7};
    vector<int>arr2 = {2,3,6,5};

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int absDiff = 0;

    for(int i=0; i<arr1.size(); i++){
        absDiff+=abs(arr1[i] - arr2[i]);
    }

    cout<<absDiff;

    return 0;
}