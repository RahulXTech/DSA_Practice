#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
        return ans;
            }
        }
    }

}

int main(){

    vector<int> nums = {2,3,4,5,6,7,8,9};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1];
    
    return 0;
}