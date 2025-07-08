#include<iostream>
#include<vector>
using namespace std;

void RotateArr(vector<int>&arr, int k){
    int n = arr.size();
    vector<int>ans(n);
    for(int i=0; i<n; i++){
        ans[(i+k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      cout<<ans[i]<<"  ";  /* code */
    }
    
};

int main(){

vector<int>nums = {1,2,3,4,5,6,7};
int target = 3;
RotateArr(nums,target);
    return 0;
}