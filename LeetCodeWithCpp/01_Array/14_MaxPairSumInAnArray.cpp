#include<iostream>
#include<string>
#include<vector>
using namespace std;
int AllNum(vector<int>nums){
    for(int i=0; i<nums.size(); i++){
    }
}
int largestNumber(vector<int>nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > ans){
                ans = nums[i];
            }
        }
        return ans;
    }
int main(){
    vector<int>arrs = {2124, 865, 42661};
    cout<<largestNumber(arrs);
    return 0;
}