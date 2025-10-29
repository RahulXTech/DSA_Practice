#include<iostream>
#include<string>
#include<vector>

using namespace std;

int isSorted(vector<int>arr, int n){
    if(n==1 || n==0) return true;

    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}


int main(){
    vector<int> arrays = {2,6,4,5,6};
    cout<<isSorted(arrays, arrays.size()-1);
    return 0;
};