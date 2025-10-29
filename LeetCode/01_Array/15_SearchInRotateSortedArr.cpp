#include<iostream>
#include<string>
#include<vector>
using namespace std;

int RotateArray(vector<int>&arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {2,3,5,7,9,11,13,16,18,19};
    int tar = 146;
    cout<<RotateArray(arr, tar);
    return 0;
}