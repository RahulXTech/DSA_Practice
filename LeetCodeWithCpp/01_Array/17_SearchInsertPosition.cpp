#include<iostream>
#include<string>
#include<vector>

using namespace std;
int SearchInsetPosition(vector<int>arr, int tar){
    for(int i=0; i<=arr.size(); i++){
        if(arr[i] >= tar) return i;
    }
    return arr.size();
}


int main(){
vector<int> nums = {1,3,5,6};
int target = 7;
cout<<SearchInsetPosition(nums, target);

    return 0;
}