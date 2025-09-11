#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //sort
        sort(nums.begin(), nums.end());
        //freq count
        int freq = 1, ans = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq=1;
                ans = nums[i];
            }
        }
        return ans;
    }

int main(){

    vector<int> nums = {1,1,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,4};
    cout<<majorityElement(nums);

    return 0;
}