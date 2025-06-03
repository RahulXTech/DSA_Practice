#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int>ans;
    int n = nums.size();
    int i =0;
    int j = n-1;

    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main(){
    vector<int> nums = {2,4,6,7,12,26};
    int target = 30;

    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<", "<<ans[1] <<endl;
    

    return 0;
}