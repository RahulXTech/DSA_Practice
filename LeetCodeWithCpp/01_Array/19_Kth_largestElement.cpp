#include<iostream>
#include<string>
#include<set>
#include<vector>
using namespace std;

int KthLargestEle(vector<int>nums, int k){
    sort(nums.begin(), nums.end(), greater<int>());
    int count = 1;
    for(int i =0; i<nums.size(); i++){
        if(nums[i] != nums[i-1]){
            count++;
            if(count == k) return nums[i];
        }
    }
   return -1;
};

int main(){
    vector<int>arr = {2,7,1,5,3,9,2,4,3,1,7};
    int k = 3;
    cout<< KthLargestEle(arr, k);
    return 0;
}