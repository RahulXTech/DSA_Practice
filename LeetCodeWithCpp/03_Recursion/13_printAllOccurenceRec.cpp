#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printAllOccurence(vector<int>&arr,int key, int i, int n){
    if(n == i) return;
    if(arr[i]==key)
        cout<<i<<" ";
    printAllOccurence(arr, key, i+1, n);
}
int main(){
    vector<int>arr = {31,40,56,61,33,65,67,56,65,33,40,31,33,61,};
    int key = 33;
    int n = arr.size()-1;
    printAllOccurence(arr, key, 0,n);

    return 0;
}